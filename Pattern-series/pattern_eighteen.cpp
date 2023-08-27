#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int row =1;

while(row<=n){
    int column =1;
    char ch ='A'+n-row;

    while(column<=row){

        cout<< ch << " ";
        ch++;
        column ++;

    }
    cout<<endl;
    row++;
}
return 0;
}
