#include<iostream>
using namespace std;
int pow(int a,int b){
if(b==0) return 1;
if(b%2==0){
    int result =pow(a,b/2);
    return result*result;
}else{
  int result =pow(a,b/2);
  return a*result*result;
}

}
int armstrong(int n,int digits){
if(n==0) return 0;

return pow(n%10,digits)+armstrong(n/10,digits);

}

int main(){
int n;
cin>>n;
int temp =n;
int digits =0;
while(temp){

 digits++;
 temp/=10;

}
  if(n == armstrong(n , digits))cout<<"yes"<<endl;
    else cout<<"no"<<endl;

return 0;
}
