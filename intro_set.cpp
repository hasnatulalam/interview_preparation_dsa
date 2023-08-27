#include<iostream>
#include<set>
using namespace std;
int main(){
//set<int> set1={1,3,4};
//increasing order
set<int> set1;
//decresing order
//set<int,greater<int>> set1;

set1.insert(1);
set1.insert(3);
set1.insert(4);
set1.insert(1);
set1.insert(5);
set1.insert(6);
set1.insert(7);
set1.insert(8);


//Traversing a set
//set<int>::iterator itr;

//for(itr=set1.begin();itr!=set1.end();itr++){
//    cout<<*itr<<endl;
//}

//using for each lopp

for(auto value:set1){
  cout<<value<<endl;
}

//size
//cout<<set1.size()<<endl;

//delete a element
//setname.erasr();
//setname.erase(position);
//setname.erase(starting pos,ending position)


set1.erase(3);
cout<<"Printing the set1 value"<<endl;
for(auto value:set1){
  cout<<value<<endl;
}

//delete using position
auto itr=set1.begin();
advance(itr,3);
set1.erase(itr);
cout<<"Printing the set1 value"<<endl;
for(auto value:set1){
  cout<<value<<endl;
}

//delete a range of set

auto start=set1.begin();
start++;
auto endi=set1.begin();
advance(endi,3);

set1.erase(start,endi);
cout<<"Printing the set1 value after deleting a range of set"<<endl;
for(auto value:set1){
  cout<<value<<endl;
}


}
