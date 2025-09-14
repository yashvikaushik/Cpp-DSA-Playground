#include <iostream>
using namespace std;
struct Node{
int data;
Node *next;
};

class CircularLinkedList{
    Node *cursor;
    public:
    CircularLinkedList(){
        cursor=NULL;
    }
    CircularLinkedList(int x){
        cursor=new Node;
        cursor->data=x;
        cursor->next=cursor;
    }

    void InsertAtEnd(int value){
        Node *newNode=new Node;
        newNode->data=value;
        newNode->next=NULL;
        if(cursor==NULL){
            cursor=newNode;
            cursor->next=cursor;
            return;

        }
        newNode->next=cursor->next;
        cursor->next=newNode;
        cursor=newNode;


    }

    void print(){
        Node *temp=cursor->next;
        do{
            cout<<temp->data<<" -> ";
            temp=temp->next;



        }
        while(temp!=cursor->next);
    }
};
int main(){
    CircularLinkedList node1;
    node1.InsertAtEnd(8);
    node1.InsertAtEnd(2);
    node1.print();
    return 0;
}