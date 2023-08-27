#include<bits/stdc++.h>
#include<vector>
#include<unordered_set>
using namespace std;
int main(){

int n,p,q;
 cin>>n>>p>>q;
 unordered_set<int> s1;
 for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
        int correct=i;
        int incorrect=j;
        int unattended=n-i-j;
        if(unattended>=0){
            int score=correct*p +incorrect*q;
            s1.insert(score);
        }else{
          break;


        }
    }
 }






cout<<"Ans "<<s1.size()<<endl;
return 0;
}


