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

    void deleteIndex(int index){
        Node *temp=head;
        if(head==NULL){
            return;
        }
        if(index==0){
           head=head->next;
           head->prev=NULL;
           delete temp;
        }
        int curIndex=0;
        while(temp->next!=NULL && curIndex<index-1){
            curIndex+=1;
            temp=temp->next;

        }
        Node *nodeToDel=temp->next;
        temp->next=nodeToDel->next;
        temp->next->prev=temp;
        delete nodeToDel;
        
       
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
        if(head==tail){
            delete head;
            head=NULL;
            tail=NULL;
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
    node1.deleteIndex(1);
    node1.printForward();
    node1.printBackward();

    return 0;
}