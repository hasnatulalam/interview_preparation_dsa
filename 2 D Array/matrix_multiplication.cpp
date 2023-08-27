#include<iostream>
using namespace std;
int main(){
int row1,col1;
cin>>row1>>col1;
int A[row1][col1];
for(int i =0;i<row1;i++){
    for(int j =0;j<col1;j++){
        cin>>A[i][j];
    }
}
int row2,col2;
cin>>row2>>col2;
int B[row2][col2];
for(int i =0;i<row2;i++){
    for(int j =0;j<col2;j++){
       cin>>B[i][j];
    }
}
if(col1!=row2){
    cout<<"Matrix multiplication does not posible"<<endl ;
}
  int c[row1][col2];
  for(int i =0;i<row1;i++){
    for(int j =0;j<col2;j++){
        int value =0;
        for(int k =0;k<col2;k++){
            value+=A[i][k]*B[k][j];
        }
        c[i][j]=value;

    }
  }



for(int i =0;i<row1;i++){
    for(int j =0;j<col2;j++){
        cout<<c[i][j]<<" ";
    }cout<<endl;
}



}
