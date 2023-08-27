#include<iostream>
using namespace std;
void printArray(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";

} cout<<endl;
}

void swapAlternate(int arr[],int size){
for(int i=0;i<=size;i=i+2){
    if(i+1<size){
        swap(arr[i],arr[i+1]);
    }

}

}
int main(){

int arrEven[8]={5,2,7,9,5,9,12,15};
int arrOdd[5]={3,5,8,12,15};
swapAlternate(arrEven,8);
printArray(arrEven,8);
swapAlternate(arrOdd,5);
printArray(arrOdd,5);


}
