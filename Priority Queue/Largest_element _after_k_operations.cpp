#include <bits/stdc++.h>
using namespace std;


int largestPoint(vector<int> &a, int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for(auto & x:a){
        pq.push(x);
    }
    while(k--){
        int first=pq.top();
        pq.pop();
        int second=pq.top();
        pq.pop();
        pq.push(first*second);
    }
    if(pq.size()>1){
        pq.pop();
    }
    return pq.top();
}


int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    cout << largestPoint(a, n, k);


    return 0;
}
