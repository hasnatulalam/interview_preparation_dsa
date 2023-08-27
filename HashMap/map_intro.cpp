#include<iostream>
#include<map>
using namespace std;
int main(){

map<string,int>directory;
directory["hasib"]=125;
directory["babaul"]=123;
directory["Aasib"]=1852;
directory["kabaul"]=1234;


for(auto it:directory){
        cout<<"Name is"<<it.first<<" "<<endl;;
        cout<<"phone number is"<<it.second<<" "<<endl;


}



}
