#include <bits/stdc++.h>
using namespace std;

bool checkAnagram(string s1,string s2){
unordered_map<char,int>m;
for(auto c1:s1){
    m[c1]++; //storing character and frequency string 1
}
for(auto c2:s2){
    if(m.find(c2)==m.end()){
        return false;
    }else{
      m[c2]--;
    }
}
for(auto ele:m){
    if(ele.second!=0){
        return false;
    }

}
return true;

}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<(checkAnagram(s1,s2)? "yes":"No")<<endl;

    return 0;
}

