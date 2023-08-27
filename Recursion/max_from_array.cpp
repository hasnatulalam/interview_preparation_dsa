#include<iostream>
using namespace std;
int maxi(int *arr,int idx,int n){
  //we have only one element left so it is the maximum
if(idx==n-1) return arr[idx];

return max(arr[idx],maxi(arr,idx+1,n));

}
int main(){
int n=5;
int arr[]={3,10,3,2,5};
int result= maxi(arr,0,5);
cout<<result<<endl;

return 0;
}
