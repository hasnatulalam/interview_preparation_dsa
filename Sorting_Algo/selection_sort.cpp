#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &v){
    int n =v.size();
for(int i =0;i<n-1;i++){

    //finding min element unsorted array
        int mini =i;
    for(int j =i+1;j<n;j++){
        if(v[j]<v[mini]){
           mini =j;
        }
        }
    //placing min element at begaining
    if(i!=mini){
    swap(v[i],v[mini]);
    }

}
return;

}
int main(){
int n;
cin>>n;
vector<int> v(n);
for(int i =0;i<n;i++){
    cin>>v[i];
}

selectionSort(v);
for(int i =0;i<n;i++){
    cout<<v[i]<<" ";
}cout<<endl;



}
