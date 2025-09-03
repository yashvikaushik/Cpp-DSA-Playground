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
        head = new Node();
        head->next=NULL;
        head->data=x;
    }
    void deleteIndex(int index){
        Node*temp=head;
        if(head==NULL){
            return;
        }
        if(index==0){
            Node* toDelete = head;   
            head = head->next;     
            delete toDelete;         
    return;
        }
        int curIndex=0;

       while(temp!=NULL && curIndex<index-2){
        temp=temp->next;
       }
       Node *nodeToDelete=temp->next;
       temp->next=nodeToDelete->next;
       delete nodeToDelete;
       


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

    void insertAtEnd(int value){
        Node *newNode=new Node();
        newNode->data=value;
        newNode->next=NULL;

        if(head==NULL){
            head=newNode;
            return;
        }

        Node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }

        temp->next=newNode;


    }


};

int main(){
    SingleLinkedList node1(10);
    node1.insertAtEnd(20);
    node1.insertAtEnd(30);
    cout<<"the list is :"<<endl;
    node1.print();
    cout<<"after deleteion"<<endl;
   node1.deleteIndex(1);
    node1.print();
    return 0;
}