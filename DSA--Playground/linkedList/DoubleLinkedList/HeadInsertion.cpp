#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
};
class DoublyLinkedList{
    Node *head;
    public:
    DoublyLinkedList(){
        head=NULL;
    }
    DoublyLinkedList(int x){
        head=new Node;
        head->data=x;
        head->next=NULL;
        head->prev=NULL;
    }

    void insertAtHead(int value){
        Node *newNode=new Node;
        newNode->data=value;
        newNode->next=NULL;
        newNode->prev=NULL;

        if(head==NULL){
           head= newNode;
           return;
        }
        // if(head->next==NULL && head->prev==NULL ){
        //     newNode->next=head;
        //     newNode->prev=NULL;
        //     head->prev=newNode;
        //     head=newNode;
        //     return;
        // }

        newNode->next=head;
            newNode->prev=NULL;
            head->prev=newNode;
            head=newNode;
        
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
};
int main(){
    DoublyLinkedList node1(5);
    node1.insertAtHead(6);
    node1.insertAtHead(7);
    node1.printForward();
    cout<<"------------------------------------"<<endl;
    node1.printBackward();
    return 0;
}