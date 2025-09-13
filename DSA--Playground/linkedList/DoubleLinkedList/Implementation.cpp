#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
};
class DoublyLinkedList{
    Node *head;
    Node *tail;
    public:
    DoublyLinkedList(){
        head=NULL;
    }
    DoublyLinkedList(int x){
        head=new Node;
        head->data=x;
        head->next=NULL;
        head->prev=NULL;
        tail=head;
    }

    void printForward(){
        if(head==NULL){
            cout<<"the list is empty "<<endl;
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
        if(head==NULL){
            cout<<"The list is empty"<<endl;
        }
        Node *temp=tail;
        while(temp!=NULL){
            cout<<tail->data<<"<->";
            temp=temp->prev;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    DoublyLinkedList node1(5);
    node1.printForward();
    node1.printForward();
    return 0;
}