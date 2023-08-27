#include<iostream>
using namespace std;
void printArray(int arr[],int n){
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }cout<<endl;


}

void sortArray(int arr[],int n){


int temp;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}




}
int main() {

    int arr[7] = {0, 1, 2, 1, 2 ,1, 2};
    sortArray(arr, 7);
    printArray(arr, 7);


    return 0;
}

