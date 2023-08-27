#include<bits/stdc++.h>
using namespace std;
int main(){
 deque<int> input;
 input.push_back(10);
 input.push_back(20);
 input.push_back(30);
 input.push_front(40);
 input.push_front(67);

 while(!input.empty()){
    cout<<input.front()<<" ";
    input.pop_front();
 }


}

