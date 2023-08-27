#include<iostream>
using namespace std;
void update(int arr[],int n){
cout<<"Inside the function"<<endl;
//updating array's first element
   arr[0]=120;
//printing array
for(int i=0;i<3;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;


cout<<"going to the main function"<<endl;



}
int main(){
int arr[3]={2,3,5};
update(arr,3);

//printing array
for(int i=0;i<3;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}
