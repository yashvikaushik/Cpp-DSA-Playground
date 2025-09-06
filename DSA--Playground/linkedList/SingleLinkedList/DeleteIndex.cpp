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
    void deleteAtIndex(int index){
        Node *temp=head;
        if(head==NULL){
            cout<<"the list empty nothing to delete"<<endl;
            return;
        }
        if(index==0){
            head=head->next;
            delete temp;
            temp=NULL;
        }

        int curindex=0;
        while(temp->next!=NULL && curindex<index-1){
            temp=temp->next;
            curindex++;
        }
        if(temp==NULL || temp->next==NULL){
            cout<<"index out of bound"<<endl;
            return;
        }
        Node *nodedel=temp->next;
        temp->next=nodedel->next;
        delete nodedel;

    }
    void insertAtHead(int value){
        Node *newNode=new Node;
        newNode->next=NULL;
        newNode->data=value;
        if(head==NULL ){
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
    node1.insertAtHead(30);
    node1.print();
    node1.deleteAtIndex(6);
    node1.print();
    return 0;
}