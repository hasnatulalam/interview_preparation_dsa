#include <climits>
#include <iostream>
using namespace std;
int const N=1e3;

void heapify(int arr[],  int length,int curr)
{
    while (2 * curr+1 < length)
    {
        int left_child = 2 * curr+1;
        int right_child = 2 * curr + 2;
        int min_child = left_child;
        if (right_child < length && arr[right_child] < arr[min_child])
        {
            min_child = right_child;
        }
        if (arr[min_child] >= arr[curr])
        {
            return;
        }
        swap(arr[curr], arr[min_child]);
        curr = min_child;
    }
}
 void remove(int arr[],int & size){
   arr[0]=arr[size-1];
   size--;
   heapify(arr,size,0);
 }

 int kthSmallestElement(int arr[],int  size,int  k){

    //create minheap
   for(int i=size/2-1;i>=0;i--){
    heapify(arr,size,i);
   }
   //remove k-1 elements
    k-=1;
    while(k--){
        remove(arr,size);
    }
    return arr[0];
 }



// Driver's code
int main()
{
    int arr[N] = { 7, 10 ,4, 3, 20, 15 };
    int N = 5;

    // Function call
    cout << "K'th smallest element is "
         << kthSmallestElement(arr, N, 3);
    return 0;
}
