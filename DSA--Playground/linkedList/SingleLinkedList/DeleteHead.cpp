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
            head=new Node;
            head->data=x;
            head->next=NULL;
          }

          //delete at head
          void headDeletion(){
            Node *temp=head;
            if(head==NULL){
                cout<<"Nothing to delete "<<endl;
            }
            head=temp->next;
            delete temp;
            temp=NULL;
          }
          void insertAtHead(int value){
        Node *newNode=new Node;
        newNode->next=NULL;
        newNode->data=value;
        if(head==NULL){
            head=newNode;
            return;
        }
        newNode->next=head;
        head=newNode;

    }

    void print(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    SingleLinkedList node1;
    node1.insertAtHead(5);
    node1.insertAtHead(10);
    node1.print();
    node1.headDeletion();
    node1.print();
    return 0;
}