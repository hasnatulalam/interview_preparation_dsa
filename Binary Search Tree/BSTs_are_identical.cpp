#include <bits/stdc++.h>
using namespace std;

// Function to check if two arrays represent identical BSTs
bool areIdenticalBSTs(vector<int>& arr1, vector<int>& arr2, int n1, int n2, int min_val, int max_val) {
    // Find the first element in the first array that falls within the valid range
    int i;
    for (i = n1; i < arr1.size(); i++) {
        if (arr1[i] > min_val && arr1[i] < max_val)
            break;
    }

    // Find the first element in the second array that falls within the valid range
    int j;
    for (j = n2; j < arr2.size(); j++) {
        if (arr2[j] > min_val && arr2[j] < max_val)
            break;
    }

    // If both arrays are empty or the elements are not within the valid range, they are identical
    if (i == arr1.size() && j == arr2.size())
        return true;

    // If only one of the arrays has elements within the valid range, they are not identical
    if ((i == arr1.size() && j != arr2.size()) || (i != arr1.size() && j == arr2.size()))
        return false;

    // If the values of the elements are different, the arrays are not identical
    if (arr1[i] != arr2[j])
        return false;

    // Recursively check for identical BSTs in the left and right subtrees
    return areIdenticalBSTs(arr1, arr2, i + 1, j + 1, min_val, arr1[i]) &&
           areIdenticalBSTs(arr1, arr2, i + 1, j + 1, arr1[i], max_val);
}

// Function to check if two BSTs are identical without building the trees
bool checkIdenticalBSTs(vector<int>& arr1, vector<int>& arr2) {
    // Check if the arrays have the same number of elements
    if (arr1.size() != arr2.size())
        return false;

    // Check if the arrays are empty
    if (arr1.empty() && arr2.empty())
        return true;

    // Call the recursive function to check for identical BSTs
    return areIdenticalBSTs(arr1, arr2, 0, 0, INT_MIN, INT_MAX);
}

// Example usage
int main() {
    // Example test cases
    vector<int> arr1 = {4, 2, 5, 1, 3};
    vector<int> arr2 = {4, 5, 2, 3, 1};
    if (checkIdenticalBSTs(arr1, arr2))
        cout << "BSTs are identical." << endl;
    else
        cout << "BSTs are not identical." << endl;

    return 0;
}
