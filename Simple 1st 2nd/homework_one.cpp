#include<iostream>
using namespace std;
int main(){
char c;
cout<<"Enter your character "<<endl;
cin>>c;
if(c>='a' && c<='z'){
    cout<< c << " is lowercase "<<endl;
}
else if(c>= 'A' && c<='Z'){
    cout<< c << " is uppercase"<<endl;
}
else if(c>='0' && c<='9'){
    cout<<c<< " is numeric"<<endl;
}

return 0;
}
