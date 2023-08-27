#include<bits/stdc++.h>
using namespace std;
class Queue{
  stack<int> st;
  public:
      Queue(){}
    void push(int x){ //queue enqueue
      this->st.push(x);
    }
    void pop(){ //queue dequeue
        if(this->st.empty()) return;
      stack<int> temp;
      while(this->st.size()>1){
            int curr=this->st.top();
            temp.push(curr);
            this->st.pop();

      }
      //now stack size is 1  and we are at bottom element
      st.pop();
      while(!temp.empty()){
        int curr=temp.top();
        this->st.push(curr);
        temp.pop();
      }
    }
    bool isEmpty(){
       return st.empty();
    }
int Front(){
 if(this->st.empty()) return -1;
      stack<int> temp;
      while(this->st.size()>1){
            int curr=this->st.top();
            temp.push(curr);
            this->st.pop();

      }
      //now stack size is 1  and we are at bottom element
      int result=this->st.top();
      while(!temp.empty()){
        int curr=temp.top();
        this->st.push(curr);
        temp.pop();
      }
      return result;
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
