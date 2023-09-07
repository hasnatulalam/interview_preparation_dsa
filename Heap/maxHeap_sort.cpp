#include<bits/stdc++.h>
using namespace std;


void heapify(int arr[],  int length,int curr)
{
    while (2 * curr <= length)
    {
        int left_child = 2 * curr;
        int right_child = 2 * curr + 1;
        int max_child = left_child;
        if (right_child <= length && arr[right_child] > arr[max_child])
        {
            max_child = right_child;
        }
        if (arr[max_child] <= arr[curr])
        {
            return;
        }
        swap(arr[max_child], arr[curr]);
        curr = max_child;
    }
}
void remove(int arr[], int &length)
{
   swap(arr[1],arr[length]);
   length--;
  heapify(arr,length,1);
}


void heapSort(int arr[], int n)
{
    // create the heap
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr,n,i);
    }


    // remove elements from heap and append to array

    while (n > 0)
    {
       remove(arr, n);
    }
}


int main()
{
    int n = 7;
    int arr[n + 1] = {-1, 60, 10, 80, 50, 5, 20, 70};
    heapSort(arr, n);
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << ' ';
    }


    return 0;
}
