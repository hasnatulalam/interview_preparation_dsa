#include<bits/stdc++.h>
using namespace std;
void countSort_neg(vector<int> &v){
int n =v.size();

int maxi =INT_MIN;
int mini =INT_MAX;
for(int i =0;i<n;i++){
    maxi =max(maxi,v[i]);
}

for(int i =0;i<n;i++){
    mini =min(mini,v[i]);
}
//create the freq array
vector<int> freq(maxi+1,0);
for(int i =0;i<n;i++){
    freq[v[i] -mini]++;
}
//calculate cumulative freq
for(int i =1;i<maxi;i++){
        freq[i]+= freq[i-1];

}
//calculated the sorted array
vector<int> ans;
for(int i =n-1;i>=0;i--){
    ans[--freq[v[i]-mini]]=v[i];
}
//copy back the  ans to original array
for(int i =0;i<n;i++){
    v[i]=ans[i];
}

}
int main(){
int n;
cin>>n;
vector<int>a(n);
for(int i =0;i<n;i++){
    cin>>a[i];
}
    countSort_neg(a);
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;





}

