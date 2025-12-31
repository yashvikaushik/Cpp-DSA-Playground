#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
};
class SingleLinkedList{
    Node*head;
    public:
    SingleLinkedList(){
        head=NULL;
    }
    SingleLinkedList(int x){
        head=new Node;
        head->data=x;
        head->next=NULL;

    }
    void insertAtEnd(int val){
        Node*newNode=new Node;
        newNode->data=val;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            return;
        }
        Node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }

    void conactenate(SingleLinkedList l2){
        if(l2.head==NULL){
            return;

        }
        Node* temp=l2.head;
        while(temp!=NULL){
            insertAtEnd(temp->data);
            temp=temp->next;
        }
    }

    void print(){
        if(head==NULL){
            return;
        }
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<'NULL'<<endl;
    }

};
int main(){
    SingleLinkedList obj(5);
    obj.insertAtEnd(6);
    obj.insertAtEnd(7);
    SingleLinkedList obj1(50);
    obj1.insertAtEnd(60);
    obj1.insertAtEnd(70);
    obj.conactenate(obj1);
    obj.print();
    return 0;
}