#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next=NULL;
    Node *prev=NULL;

};
class DoubleLinkedList{
    Node *head;
    Node *tail;
    public:
    DoubleLinkedList(){
        head=NULL;
        tail=NULL;
    }
    DoubleLinkedList(int x){
        head=new Node;
        head->data=x;
        head->next=NULL;
        head->prev=NULL;
        tail=head;

    }
    void insertAtIndex(int value,int index){
        Node *newNode=new Node;
        newNode->data=value;
        newNode->next=NULL;
        newNode->prev=NULL;
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }

        if(index==0){
            head->prev=newNode;
            newNode->next=head;
            return;

        }



        Node*temp=head;
        int cindex=0;
        while(temp->next!=NULL && cindex<index-1 ){
            cindex+=1;
            temp=temp->next;
        }
        newNode->next=temp->next;
        newNode->prev=temp;
        temp->next->prev=newNode;
        temp->next = newNode;

    }
    void insertAtEnd(int value){
        Node *newNode=new Node;
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }

        newNode->data=value;
        newNode->next=NULL;
        newNode->prev=NULL;

        newNode->prev=tail;
        tail->next=newNode;
        tail=newNode;
    }

    void printForward(){
        if(head==NULL){
            cout<<"the list is empty "<<endl;
            return;
        }
        Node *temp=head;
        cout<<"NULL <->";
        while(temp!=NULL){
            cout<<temp->data<<"<->";
            temp=temp->next;

        }
        cout<<" NULL"<<endl;
    }

    void printBackward(){
        Node *temp=head;
        if(head==NULL){
            cout<<"the list is empty"<<endl;
            return;
        }
        //traverse till the last node
        while(temp->next!=NULL){
            temp=temp->next;
        } 
        cout<<"NULL <->";
        while(temp!=NULL){
            cout<<temp->data<<"<->";
            temp=temp->prev;
        }
        cout<<" NULL"<<endl;


    }
};
int main(){
    DoubleLinkedList node1(6);
    node1.insertAtEnd(7);
    node1.insertAtEnd(8);
    node1.printForward();
    node1.printBackward();
    node1.insertAtIndex(20,2);
    node1.printForward();
    node1.printBackward();

    return 0;
}