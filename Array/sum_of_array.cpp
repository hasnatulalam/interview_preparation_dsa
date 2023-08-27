#include<iostream>
using namespace std;
int main(){
int size;
cin>>size;
int arr[100];
int sum =0;
for(int i=0;i<size;i++){
    cin>>arr[i];
}
for(int i=0;i<size;i++){
    sum =arr[i]+sum;
}
cout<<sum<<endl;




}
