#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
int row =1;
while(row<=n){
  int star =n-row+1;
  int count =1;
  while(star){
    cout<<count;
    count++;
    star--;
  }

  int star2=row-1;
  while(star2){
    cout<<"*";
    star2--;
  }
  int star3 =row -1;
  while(star3){
    cout<<"*";
    star3--;
  }
  int star4=n-row+1;
  while(star4>=1){
    cout<<star4;
    star4--;
  }


  cout<<endl;
  row++;
}
}
