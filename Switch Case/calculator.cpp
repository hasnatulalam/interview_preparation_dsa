#include<iostream>
using namespace std;
int main(){

int a,b;
cin>>a>>b;
char p;
cin>>p;
switch(p){
case('+'):{
    cout<<a+b<<endl;
     break;
     }
case('-'):{
       cout<<a-b<<endl;
       break;

}
case('*'):{
       cout<<a*b<<endl;
           break;

}
case('/'):{
       cout<<a/b<<endl;
        break;

}
default:cout<<"Tomara input wrong ha"<<endl;


}



}
