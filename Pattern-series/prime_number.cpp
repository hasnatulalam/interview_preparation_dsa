#include<iostream>
using namespace std;
int main(){
int n,p;
cin>>n;
int i =2;
if(i<n){
    if(n%i!=0){
        cout<<n <<" is prime"<<endl;
         i++;
    }

else{
     cout<<n <<" is not prime"<<endl;
}
}

return 0;
}
