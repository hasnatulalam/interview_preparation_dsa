#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int Bs100,Bs50,Bs20,Bs10;
switch(1){
case 1: Bs100=n/100;
            n=n%100;
         cout<<"number of 100 tk"<< Bs100 <<endl;

case 2:Bs50=n/50;
         n= n%50;
         cout<<"number of 50 tk"<< Bs50 <<endl;
case 3:Bs20=n/20;
         n=n%20;
         cout<<"number of 20 tk"<< Bs20 <<endl;
case 4:Bs10=n/10;
         n= n%10;
         cout<<"number of 10 tk"<< Bs10 <<endl;



}


}
