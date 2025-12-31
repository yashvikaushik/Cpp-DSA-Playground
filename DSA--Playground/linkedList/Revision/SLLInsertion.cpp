#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
class SingleLinkedList{
    Node *head;
    public:
    SingleLinkedList(){
        head=NULL;
    }
    SingleLinkedList(int x){
        head=new Node;
        head->next=NULL;
        head->data=x;
    }
    void headInsertion(int x){
        Node *newNode=new Node;
        newNode->next=NULL;
        newNode->data=x;
        if(head==NULL){
            head=newNode;
            return;
        }
        newNode->next=head;
        head=newNode;

    }

    void endInsertion(int x){
        Node*newNode=new Node;
        newNode->next=NULL;
        newNode->data=x;
        if(head==NULL){
            head=newNode;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }

    void indexInsertion(int index,int value){
        Node*newNode=new Node;
        newNode->data=value;
        newNode->next=NULL;
        if(index==0){
            newNode->next=head;
            head=newNode;
            return;
        }
        Node*temp=head;
        int i=0;
        while(temp!=NULL && i<index-1){
temp=temp->next;
i++;
        }
        if(temp==NULL){
            cout<<"INVALID INDEX"<<endl;
            return;
        }
        newNode->next=temp->next;
        temp->next=newNode;

    }
    void sortedInsert(int value){
        Node*newNode=new Node;
        newNode->data=value;
        newNode->next=NULL;
        if(head==NULL || head->data>value){
            newNode->next=head;
            head=newNode;
            return;
        }
        Node*temp=head;
        while(temp->next!=NULL && temp->next->data<value){
            temp=temp->next;

        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    void print(){
        if(head==NULL){
            cout<<"the list is empty";
            return;
        }
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }

};
int main(){
    SingleLinkedList obj(5);
    obj.headInsertion(4);
    obj.endInsertion(6);
    //obj.indexInsertion(1,33);
    obj.sortedInsert(3);
    obj.print();


}
