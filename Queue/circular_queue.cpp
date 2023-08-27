#include<bits/stdc++.h>
using namespace std;
class Queue{
  int Front;
  int Back;
  int cs;
  int ts;
  vector<int> v;
  public:
      Queue(int n){
          v.resize(n);
          this->Front=0;
          this->Back=n-1;
          this->cs=0;
          this->ts=n;
      }
void enqueue(int data){
    if(isFull()) return ;
    this->Back=(this->Back+1)% this->ts;
    this->v[this->Back]=data;
    this->cs++;

}
void dequeue(){
   if(isEmpty()) return ;
     this->Front=(this->Front+1)% this->ts;
       this->cs--;
}
int getFront(){
    if(this->Front==-1) return -1;
    return v[this->Front];
}
bool isEmpty(){
  return this->cs==0;
}
bool isFull(){
return this->cs==this->ts;
}


};
int main(){

Queue qu(3);
 qu.enqueue(10);
qu.enqueue(20);
qu.enqueue(30);
qu.dequeue();
qu.enqueue(40);
qu.dequeue();
qu.dequeue();
qu.dequeue();
qu.enqueue(400);
qu.enqueue(500);

while( not qu.isEmpty()){
    cout<<qu.getFront()<<" ";
    qu.dequeue();
}
}

