#include<iostream>
using namespace std;
void reverse(int arr[],int n){
int start =0;
int end =n-1;
while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
}


}
void printArray(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<< " ";
}
cout<<endl;

}
int main(){
int arr1[6]={2,4,6,7,9,12};
int arr2[5]={2,3,4,5,6};
reverse(arr1,6);
reverse(arr2,5);
printArray(arr1,6);
printArray(arr2,5);


}
