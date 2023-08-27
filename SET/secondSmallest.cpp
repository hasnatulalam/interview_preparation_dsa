#include<bits/stdc++.h>
#include<vector>
#include<set>
using namespace std;
int main(){

int n;
 cin>>n;


vector<int> v1(n);


cout<<"Enter the elements of v1"<<endl;
for(int i=0;i<n;i++){
    cin>>v1[i];
}


set<int> s1;
for(auto it:v1){
   s1.insert(it);
}
 auto itr=s1.begin();
itr++;



cout<<"second smallest  number  is  "<<*itr<<endl;
return 0;
}

