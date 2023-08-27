#include<bits/stdc++.h>
using namespace std;
class Queue{
  int Front;
  int Back;
  vector<int> v;
  public:
      Queue(){
          this->Front=-1;
          this->Back=-1;
      }
void enqueue(int data){
    v.push_back(data);
    this->Back++;
    if(this->Back==0) this->Front=0;

}
void dequeue(){
    if(this->Front==this->Back){
        this->Front=-1;
        this->Back=-1;
        this->v.clear()
    }
 else this->Front++;
}
int getFront(){
    if(this->Front==-1) return -1;
    return v[this->Front];
}
bool isEmpty(){
  return this->Front==-1;
}


};
int main(){

Queue qu;
 qu.enqueue(10);
qu.enqueue(20);
qu.enqueue(30);
qu.dequeue();
qu.enqueue(40);
while( not qu.isEmpty()){
    cout<<qu.getFront()<<" ";
    qu.dequeue();
}
}
