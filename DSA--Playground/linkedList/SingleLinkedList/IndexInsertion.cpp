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

    void insertAtIndex(int value,int index){
        Node *newNode=new Node();
        newNode->data=value;
        newNode->next=NULL;

        if(head==NULL){
            head=newNode;
            return;
        }

        if (index == 0) {
        newNode->next = head;
        head = newNode;
        return;
    } 

        int currIndex=0;
        Node *temp=head;
        while(temp->next!=NULL && currIndex<index-1){
            temp=temp->next;
            currIndex++;
        }

        if(temp==NULL){
            cout<<"Index out of bound"<<endl;
            delete newNode;
            return;
        }
        newNode->next=temp->next;
        temp->next=newNode;



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
        SingleLinkedList node1(10);
        cout<<"before insertion"<<endl;
        node1.print();
        node1.insertAtIndex(5,1);
        cout<<"after insertion"<<endl;
        node1.print();
        cout<<"___________________"<<endl;
        node1.insertAtIndex(7,1);
        node1.print();
        return 0;
    }

    
