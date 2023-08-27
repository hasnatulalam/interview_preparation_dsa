#include<iostream>
using namespace std;
bool search(int arr[],int n,int key){
for(int i=0;i<n;i++){
    if(arr[i]==key){
        return 1;
    }
}

return 0;

}

int main(){
int arr[5]={2,5,7,8,9};
int key ;
cin>>key;

bool found=search(arr,5,key);
if(found){
  cout<<"key is present"<<endl;
}
else{
  cout<<"key is not present"<<endl;
}




}
