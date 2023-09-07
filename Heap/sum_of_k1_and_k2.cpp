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
int remove(int arr[],int & size){
    int removedvalue =arr[0];
arr[0]=arr[size-1];
size--;
heapify(arr,size,0);
return removedvalue;
}
int sumOfSmallest(int arr[],int size,int K1,int K2){
    //1 min heap
for(int i=size/2-1;i>=0;i--){
    heapify(arr,size,i);
}
int sum =0;
int elements=K2-K1-1;
//2 remove k1 elements
while(K1--){
    remove(arr,size);
}
//calculate sum by removing elements
while(elements--){
    sum +=remove(arr,size);
}



return sum;

}


// Driver's code
int main()
{
    int arr[6] = { 7, 10 ,4, 3, 20, 15 };
    int size = 6;
    int K1=2;
    int K2=4;

    // Function call
    cout <<sumOfSmallest(arr, size,K1,K2)<<endl;

    return 0;
}

