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

    void insertAtEnd(int value){
        Node *newNode=new Node;
        newNode->next=NULL;
        newNode->data=value;
        if(head==NULL){
            head=newNode;
            return;
        }
        if(head->next==NULL){
            head->next=newNode;
            return;

        }

        Node *temp=head;
        while(temp->next!=NULL){
          temp=temp->next;
        }
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
    SingleLinkedList node1;
    node1.insertAtEnd(5);
    node1.insertAtEnd(10);
     //node1.insertAtEnd(15);

    node1.print();
    return 0;
}