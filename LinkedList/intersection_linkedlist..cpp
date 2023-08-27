#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int data){
       val =data;
       next=NULL;

    }


};
class LinkedList{
public:
    Node* head;
    LinkedList(){

    head = NULL;
    }

    void insertAtTail(int val){
        Node* new_node =new Node(val);

        if(head==NULL){
            //Linked list empty
            head =new_node;
            return ;

        }
        Node* temp =head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = new_node;

    }
    void display(){
      Node* temp =head;

      while(temp!=NULL){
          cout<<temp->val<<" ->";
          temp =temp->next;
      }cout<<"NULL"<<endl;



    }


};

int getlength(Node* head){
Node* temp =head;
int length=0;
while(temp!=NULL){
    length++;
    temp=temp->next;

}
return length;

}
Node* moveHeadbyk(Node* head,int k){
  Node* ptr =head;
  while(k--){
    ptr=ptr->next;
  }
  return ptr;
}
Node* getIntersection(Node* head1,Node* head2){

//step1: calculate length of both linkedlist
int l1=getlength(head1);
int l2=getlength(head2);

//step2:find difference k between linkedlist and move longer linkedlist ptr by k steps

 Node* ptr1;
 Node* ptr2;
if(l1>l2){
    //l1 is greater than l2
    int k=l1-l2;
    ptr1=moveHeadbyk(head1,k);
    ptr2=head2;
}else{
  int k =l2-l1;
  ptr1=head1;
  ptr2=moveHeadbyk(head2,k);
}
//step3 compare ptr1 & ptr2
while(ptr1!=NULL){
    if(ptr1==ptr2){
        return ptr1;
    }
    ptr1=ptr1->next;
    ptr2=ptr2->next;
}

 return NULL;


}

int main(){

LinkedList ll1;
ll1.insertAtTail(1);
ll1.insertAtTail(2);
ll1.insertAtTail(3);
ll1.insertAtTail(4);
ll1.insertAtTail(5);

//ll1 1->2->3->4->5
LinkedList ll2;

ll2.insertAtTail(6);
ll2.insertAtTail(7);
ll2.head->next->next=ll1.head->next->next->next ;
//ll2 6->7->4->5->NULL
Node* intersection =getIntersection(ll1.head,ll2.head);
if(intersection){
    cout<<intersection->val<<endl;
}else{
cout<<"-1"<<endl;
}

return 0;
}



