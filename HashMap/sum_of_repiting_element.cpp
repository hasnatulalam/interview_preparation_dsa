#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){

int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];

}
map<int,int>nums;
for(int i=0;i<n;i++){
    nums[v[i]]++;
}
int ans=0;
for(auto it:nums){
    if(it.second>1){
        ans+=it.first;
    }
}
cout<<"ans is "<<ans<<endl;






}

