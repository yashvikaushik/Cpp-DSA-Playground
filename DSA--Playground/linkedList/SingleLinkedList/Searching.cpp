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

    int searchValue(int value){
        int index=0;
        if(head==NULL){
            cout<<"the list is empty"<<endl;
            return -1;
        }
        if(value==head->data){
            return 0;
        }
        Node *temp=head;
        while(temp!=NULL ){
            if(temp->data==value){
                return index;
            }
            temp=temp->next;
            index++;
        }
        return -1;;
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
    int res=node1.searchValue(10);
    cout<<res;
    return 0;
}