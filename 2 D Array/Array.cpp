#include<iostream>
using namespace std;
bool presentArrayElemnt(int arr[3][4],int target,int i,int j){

 for(int i =0;i<3;i++){
    for(int j =0;j<4;j++){
        if(arr[i][j]==target){
            return 1;
        }
    }
}
return 0;
}
//row wise sum
void rowwiseSum(int arr[3][4],int i,int j){
    for(int i =0;i<3;i++){
            int sum =0;
    for(int j =0;j<4;j++){
        sum +=arr[i][j];
    }
    cout<<sum<< " "<<endl;

}
}

int largestRowSum(int arr[3][4],int i,int j){
int maxi =INT_MIN;
int rowIndex = -1;
 for(int i =0;i<3;i++){
        int sum =0;
    for(int j =0;j<4;j++){
        sum +=arr[i][j];
    }
    if(sum>maxi){
        maxi =sum;
        rowIndex =i;
    }


}
 cout<<"Row index is "<<rowIndex<<endl;
return maxi;


}
void colwiseSum(int arr[3][4],int i,int j){
    for(int j =0;j<4;j++){
            int sum =0;
    for(int i =0;i<3;i++){
        sum +=arr[i][j];
    }
    cout<<sum<< " "<<endl;

}
}




int main(){

int arr[3][4];
for(int i =0;i<3;i++){
    for(int j =0;j<4;j++){
        cin>>arr[i][j];
    }
}

//print kardo
for(int i =0;i<3;i++){
    for(int j =0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
  cout <<" Enter the element to search " << endl;
    int target;
    cin >> target;

if(presentArrayElemnt(arr,target,3,4)){
    cout<<"Element is found"<<endl;
}
rowwiseSum(arr,3,4);
colwiseSum(arr,3,4);
int largestrow =largestRowSum(arr,3,4);
cout<<largestrow<<endl;

}
