#include<iostream>
#include<vector>
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

Node* mergeTwoSortedLinkedList(Node* &head1,Node* &head2){
Node* dummyHeadNode =new Node(-1);

Node* ptr1=head1;
Node* ptr2 =head2;
Node* ptr3=dummyHeadNode;
while(ptr1!=NULL && ptr2!=NULL){
    if(ptr1->val> ptr2->val){
        ptr3->next=ptr2;
        ptr2=ptr2->next;
    }else{

         ptr3->next=ptr1;
        ptr1=ptr1->next;

    }
    ptr3=ptr3->next;
}
if(ptr1!=NULL){
    ptr3->next=ptr1;
}else{
      ptr3->next=ptr2;
}
return dummyHeadNode->next;


}
Node* mergeKLinkedList(vector<Node*> &Lists){
  if(Lists.size()==0){
    return NULL;
  }
 while(Lists.size()>1){
     Node* mergeHead=  mergeTwoSortedLinkedList(Lists[0],Lists[1]);
     Lists.push_back(mergeHead);
     Lists.erase(Lists.begin());
     Lists.erase(Lists.begin());
 }
 return Lists[0];

}






int main(){

LinkedList ll1;
ll1.insertAtTail(1);
ll1.insertAtTail(7);
ll1.insertAtTail(8);
ll1.display();


//ll1 1->2->3->4->5
LinkedList ll2;

ll2.insertAtTail(2);
ll2.insertAtTail(4);
ll2.insertAtTail(5);
ll2.display();
LinkedList ll3;

ll3.insertAtTail(3);
ll3.insertAtTail(6);
ll3.display();
 vector<Node*> Lists;
 Lists.push_back(ll1.head);
 Lists.push_back(ll2.head);
  Lists.push_back(ll3.head);

  LinkedList mergedLL;
  mergedLL.head=mergeKLinkedList(Lists);
  mergedLL.display();


return 0;
}





