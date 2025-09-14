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

    void InsertAtFront(int value){
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


    }

    void deleteEnd(){
        Node *nodeToDel;
        if(cursor==NULL){
            cout<<"Nothing to delete"<<endl;
            return;
        }
        if(cursor==cursor->next){
            delete cursor;
            cursor=NULL;
            return;
        }

        Node *temp=cursor->next;
        do{
            if(temp->next==cursor)
            break;

            temp=temp->next;

        }
        while(temp->next!=cursor);

        nodeToDel=temp->next;
        temp->next=nodeToDel->next;
        delete nodeToDel;
        cursor=temp;
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
    node1.InsertAtFront(10);
    node1.InsertAtFront(20);
    node1.InsertAtFront(30);
    node1.InsertAtFront(40);
    node1.deleteEnd();
    node1.print();
    return 0;
}