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
    
    Node* findMiddle(Node *head){
        Node *fast=head->next;
        Node *slow=head;
        if(head==NULL){
            return head;//when the list is empty
        }
        if(head->next==NULL){
            return head;//when only one node is present
        }
        if(head->next->next==NULL){
            return head->next;//when two nodes are prsent
        }
        while(fast!=NULL){ //when more than two nodes are present
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }

            slow=slow->next;
        }
        return slow;

        


    }

    void mn(){
        Node *middle=findMiddle(head);
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
   node1.insertAtHead(40);
    node1.insertAtHead(30);
    node1.print();
    node1.mn();
    //node1.print();
    
    return 0;
}