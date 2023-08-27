#include<bits/stdc++.h>
#include<vector>
#include<set>
using namespace std;
int main(){

int n;
 cin>>n;
int m;
cin>>m;
vector<int> v1(n);
vector<int> v2(m);

cout<<"Enter the elements of v1"<<endl;
for(int i=0;i<n;i++){
    cin>>v1[i];
}

cout<<"Enter the elements of v2"<<endl;
for(int i=0;i<m;i++){
    cin>>v2[i];
}
int ans_sum=0;
set<int> s1;
for(auto it:v1){
    s1.insert(it);
}

for(auto it:v2){
    if(s1.find(it)!=s1.end()){
        ans_sum+=it;
    }
}
cout<<"ans is common number sum is  "<<ans_sum<<endl;
return 0;
}
