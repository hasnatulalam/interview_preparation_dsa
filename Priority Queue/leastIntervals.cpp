#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
using namespace std;

int leastInterval(vector<char>& tasks, int n) {
    unordered_map<char, int> taskCount;

    // Count the frequency of each task
    for (char task : tasks) {
        taskCount[task]++;
    }

    // Create a priority queue (min heap) to store the frequencies
    priority_queue<int> pq;
    for (auto pair : taskCount) {
        pq.push(pair.second);
    }

    int totalTime = 0;

    while (!pq.empty()) {
        vector<int> temp; // Temporary vector to store the tasks that are currently being executed

        for (int i = 0; i <= n; i++) {
            if (!pq.empty()) {
                int freq = pq.top();
                pq.pop();

                if (freq > 1) {
                    temp.push_back(freq - 1); // Add the remaining tasks back to the temporary vector
                }
            }

            totalTime++; // Increment the total time

            if (pq.empty() && temp.empty()) {
                break; // If both the priority queue and the temporary vector are empty, we are done
            }
        }

        for (int freq : temp) {
            pq.push(freq); // Add the remaining tasks back to the priority queue
        }
    }

    return totalTime;
}

int main() {
    vector<char> tasks = {'A', 'A', 'A', 'B', 'B', 'B'};
    int cooldown = 2;

    int leastTime = leastInterval(tasks, cooldown);
    cout << "Least number of units of time: " << leastTime << endl;

    return 0;
}
