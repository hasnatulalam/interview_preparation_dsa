#include<bits/stdc++.h>
#include<set>
using namespace std;
int main(){

 set<string> invitelist;
 int n;
 cin>>n;
 while(n--){
    string name;
    cin>>name;

    invitelist.insert(name);

 }
 cout<,"Printing invite list"<<endl;
 for(auto it: invitelist){
    cout<<it<<endl;
 }

}

