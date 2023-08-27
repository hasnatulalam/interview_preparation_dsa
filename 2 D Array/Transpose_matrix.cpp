#include<iostream>
using namespace std;
int main(){
int row,col;
cin>>row>>col;
int A[row][col];
for(int i =0;i<row;i++){
    for(int j =0;j<col;j++){
        cin>>A[i][j];
    }
}
int T[col][row];
for(int i =0;i<col;i++){
    for(int j =0;j<row;j++){
        T[i][j]=A[j][i];
    }
}
for(int i=0;i<col;i++){
    for(int j =0;j<row;j++){
        cout<<T[i][j]<<" ";
    }cout<<endl;
}


}
