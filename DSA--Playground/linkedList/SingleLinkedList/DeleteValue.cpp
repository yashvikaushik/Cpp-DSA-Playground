#include <iostream>
using namespace std;
struct Node
{
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
        head = new Node;
        head->data=x;
        head->next=NULL;
    }

    void deleteByValue(int value){
        Node *temp=head;
        if(head==NULL){
            cout<<"nothing to delete"<<endl;
        }
        if(value==head->data){
            head=head->next;
            delete temp;
            temp=NULL;
        }

        while(temp->next!=NULL && value!=temp->next->data){
            temp=temp->next;
        }
        Node* delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;
       
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
        cout<<"NULL"<<endl;
    }



};

int main(){
SingleLinkedList node1;
    node1.insertAtHead(5);
    node1.insertAtHead(10);
    node1.insertAtHead(45);
    node1.print();
    node1.deleteByValue(5);
    node1.print();
    return 0;
}