#include<bits/stdc++.h>
using namespace std;
bool checkAllAlphabet(string &s){
    if(s.length()<26){
            return false;

    }
    transform(s.begin(),s.end(),s.begin(),::tolower);
    set<char> alphabets;
    for(auto it:s){
        alphabets.insert(it);
    }

    return (alphabets.size()==26);

}
int main(){

string input;
cin>>input;
if(checkAllAlphabet(input)){
    cout<<"All Alphabet are present"<<endl;
}else{

 cout<<"All Alphabet are not present"<<endl;
}

}
