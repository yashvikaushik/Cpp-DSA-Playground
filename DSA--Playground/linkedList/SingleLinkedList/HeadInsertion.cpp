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
        head=new Node();
        head->data=x;
        

    }

    void insertAtHead(int value){
        Node *newNode=new Node();
         newNode->data=value;
        newNode->next=NULL;
        if(head == NULL){
            head=newNode;
            return;
        }
        newNode->data=value;
        newNode->next=head;
        head=newNode;
        

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
    SingleLinkedList node1;
   
    cout<<"the list before insertion at head is: "<<endl;
   node1.print();
   node1.insertAtHead(5);
   cout<<"printing after insertion: "<<endl;
   node1.print();
    return 0;
}