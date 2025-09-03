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
        head = new Node();
        head->next=NULL;
        head->data=x;
    }

    void insertAtEnd(int value){
        Node *newNode=new Node();
        newNode->data=value;
        newNode->next=NULL;

        if(head==NULL){
            head=newNode;
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
        if(head==NULL){
            cout<<"THE LIST IS EMPTY"<<endl;
            return ;
        }

        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }

    }
    };
    int main(){
        SingleLinkedList node1(10);
        cout<<"before insertion"<<endl;
        node1.print();
        node1.insertAtEnd(5);
        cout<<"after insertion"<<endl;
        node1.print();
        return 0;
    }

    
