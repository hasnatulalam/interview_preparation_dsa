
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){

unordered_map<string,int>directory;
directory["hasib"]=1;
directory["babaul"]=2;
directory["Aasib"]=3;
directory["kabaul"]=4;

for(auto it:directory){
        cout<<"Name is"<<it.first<<" "<<endl;;
        cout<<"phone number is"<<it.second<<" "<<endl;


}



}
