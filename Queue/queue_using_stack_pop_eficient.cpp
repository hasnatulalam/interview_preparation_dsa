#include<bits/stdc++.h>
using namespace std;
class Queue{
  stack<int> st;
  public:
      Queue(){}
    void push(int x){ //queue enqueue
     stack<int> temp;
     while(!st.empty()){
        temp.push(this->st.top());
        this->st.pop();
     }
     this->st.push(x);
     while(!temp.empty()){
        this->st.push(temp.top());
        temp.pop();
     }
    }
    void pop(){ //queue dequeue
        if(this->st.empty()) return ;
        return this->st.pop();
    }
    bool isEmpty(){
       return st.empty();
    }
int Front(){
      if(this->st.empty()) return -1;
      return this->st.top();
}
};
int main(){

Queue qu;
qu.push(10);
qu.push(20);
qu.push(30);
qu.pop();
while(!qu.isEmpty()){
    cout<<qu.Front()<<" ";
    qu.pop();
}
return 0;
}

