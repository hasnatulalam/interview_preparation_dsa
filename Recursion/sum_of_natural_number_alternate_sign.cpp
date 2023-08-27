#include<iostream>
using namespace std;
int sum(int n){
if(n==0) return 0;
return sum(n-1)+ ((n%2==0)? (-n):n);


}
int main(){

int n=5;
int res=sum(5);
cout<<res;
}
