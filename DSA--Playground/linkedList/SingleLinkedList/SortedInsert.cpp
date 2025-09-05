#include <iostream>
using namespace std;
struct Node{
     int data;
     Node *next;
};
class SingleLinkedList{
    Node *head;
    public:
    SingleLinkedList(){
        head=NULL;
    }
    SingleLinkedList(int x){
        head= new Node;
        head->data=x;
        head->next=NULL;
    }

    void insertInSortedOrder(int value){
        Node *newNode=new Node;
        newNode->data=value;
        newNode->next=NULL;

        if(head==NULL){
            head=newNode;
            return;
        }
       if (value < head->data) {
          newNode->next = head;
          head = newNode;
          return;
}

        Node *temp=head;
        while(temp->next!=NULL && temp->next->data<value){
             temp=temp->next;
        }
        
        newNode->next=temp->next;
        temp->next=newNode;
    }


        void print(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    
    }

};
int main(){
    SingleLinkedList node1(4);
    node1.insertInSortedOrder(2);
    node1.insertInSortedOrder(5);
    node1.insertInSortedOrder(0);
    node1.insertInSortedOrder(3);
    node1.print();

    return 0;
}