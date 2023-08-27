
#include<iostream>
#include<map>
using namespace std;
int main(){

multimap<string,int>directory;
directory.insert(make_pair("hasib",1));
directory.insert(make_pair("hasib",1));
directory.insert(make_pair("asif",3));
directory.insert(make_pair("tausif",2));


for(auto it:directory){
        cout<<"Name is"<<it.first<<" "<<endl;;
        cout<<"phone number is"<<it.second<<" "<<endl;


}



}
