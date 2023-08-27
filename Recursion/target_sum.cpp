#include<iostream>
using namespace std;
bool f(int *arr,int n,int i,int x){

if(i==n){
  //array is exhausted
  return false;
}
return arr[i]==x || (arr,n,i+1,x);
}
int main(){

int arr[]={12,7,2,8};
int n =4;
bool result =f(arr,n,0,8);
if(result) cout<<"yes"<<endl;
else cout<<"NO"<<endl;
}
