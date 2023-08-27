#include<iostream>
using namespace std;
class Stack{
    int capacity;
    int* arr;
    int top;
    public:
    Stack(int c){
      capacity=c;
      arr=new int(c);
      top=-1;
    }
 void push(int data){
  if(top==capacity-1){
    cout<<"Overflow"<<endl;
    return ;
  }
  top++;
  arr[top]=data;


 }
 int pop(){
 if(top==-1){
    cout<<"underflow\n";
    return INT_MIN ;
 }
 top--;

 }
 int Top(){
 if(top==-1){
    cout<<"underflow\n";
    return INT_MIN;
 }
   return arr[top];
 }
 bool isEmpty(){

    return top==-1;
 }
 int sizeOfStack(){
  return top+1;

 }
 bool isFull(){
   return top==capacity-1;

 }


};
int main(){
Stack st(5);
st.push(1);
st.push(2);
st.push(3);
cout<<st.Top()<<"\n";
st.push(4);
st.push(5);
cout<<st.Top()<<"\n";
st.push(6);
st.pop();
st.pop();
cout<<st.Top()<<"\n";






}

