#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
unordered_set<int> set1;
set1.insert(5);
set1.insert(2);
set1.insert(6);

for(auto it:set1){
    cout<<it<<" ";
}


}
