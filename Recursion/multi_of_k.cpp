#include<iostream>
using namespace std;
void multi(int num,int k){

if(k==0) return ;
multi(num,k-1);
cout<<num*k<<" ";

}
int main(){
multi(8,5);
return 0;

}
