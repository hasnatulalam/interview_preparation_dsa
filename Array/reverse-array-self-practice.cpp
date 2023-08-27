// Iterative C++ program to reverse an array
#include <bits/stdc++.h>
using namespace std;

/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
	while (start < end)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}

/* Utility function to print an array */
void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
}

/* Driver function to test above functions */
int main()
{
	int arr[100];

	int n;
	cin>>n;
	for(int i=0;i<n;i++)
    {

        cin>>arr[i];
    }

	// To print original array
	printArray(arr, n);

	// Function calling
	rvereseArray(arr, 0, n-1);

	cout << "Reversed array is" << endl;

	// To print the Reversed array
	printArray(arr, n);

	return 0;
}
