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
    int countNode(){
        Node*temp=head;
        int count=0;
        if(head==NULL){
          return -1;
        }
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    Node* findMiddle(){
        int count=countNode();
        int idx=count/2;
        int cidx=0;
        Node *temp=head;
        while(temp->next!=NULL && cidx<idx-1){
            cidx++;
            temp=temp->next;

        }
        return temp->next;


    }

    void mn(){
        Node *middle=findMiddle();
        cout<<middle->data;
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
   // node1.insertAtHead(40);
    node1.insertAtHead(30);
    node1.print();
    node1.mn();
    //node1.print();
    
    return 0;
}