#include<bits/stdc++.h>
using namespace std;
class Hashing{
public:
vector<list<int>> hashtable;
int buckets;
  Hashing(int Size){
    buckets=Size;
    hashtable.resize(Size);
  }
int hashvalue(int key){
 return key%buckets;  //division method
}
void addkey(int key){
  int idx=hashvalue(key);
  hashtable[idx].push_back(key);

}
list<int>::iterator Search(int key){
int idx=hashvalue(key);
 return  find(hashtable[idx].begin(),hashtable[idx].end(),key);


}
void deletekey(int key){
int idx=hashvalue(key);
if(Search(key)!=hashtable[idx].end()){ //key is present
hashtable[idx].erase(Search(key));
cout<<key<<"is Deleted"<<endl;
}else{
  cout<<"key is not present in the hashtable"<<endl;
}

}


};
int main(){
Hashing  h(10);
h.addkey(5);
h.addkey(9);
h.addkey(3);
h.deletekey(3);
return 0;

}
