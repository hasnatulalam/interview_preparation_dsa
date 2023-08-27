#include<iostream>
using namespace std;
int f(int i,int j,int m,int n){
if(i>=m||j>=n) return 0;
if(i==m-1 & j==n-1) return 1;
  return f(i+1,j,m,n)+f(i,j+1,m,n);

}
int main(){
   int m,n;
    cin>>m>>n;
    int sum = 0;
    int i = 0 , j = 0;
    cout<<f(i,j,m,n)<<endl;

}
