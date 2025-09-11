#include <iostream>
#include <map>
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

    Node* detectLoop(){
       
       Node *fast=head;
       Node *slow=head;
       if(head==NULL){
        return NULL;
       }
       while(fast!=NULL){
        
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;

        }
        slow=slow->next;
        if(fast==slow){
            return slow;
        }

       }
       return NULL;

    }

    Node* startingNode(){
        Node*fast=detectLoop();
        if(fast==NULL){
            return NULL;
        }
        Node*slow=head;
        while(fast!=slow){
            fast=fast->next;
            slow=slow->next;
            
        }
        return slow;
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

    void removeLoop(){
        Node* startNode=startingNode();
        Node* temp=startNode;
        if(head==NULL){
            cout<<" "<<endl;
        }
        while(temp->next!=startNode){
        temp=temp->next;
        }
        temp->next=NULL;
    }


    void print(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    Node* getHead(){
    return head;
}

};
// a main from ai with a loop containing list

     int main() {
    SingleLinkedList node1;
    node1.insertAtHead(5);
    node1.insertAtHead(10);
    node1.insertAtHead(45);
    node1.insertAtHead(30);

    // ✅ Create a loop manually (last node -> node with data = 45)
    Node* temp = node1.getHead();
    Node* last = temp;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = temp->next;  // loop: 5 -> 10 -> 45 -> 30 -> 45 ...

    Node* res = node1.detectLoop();
    if (res != NULL) {
        cout << "Loop was detected" << endl;
        Node* loopStart = node1.startingNode();
        cout << "The first node of the loop is: " << loopStart->data << endl;

        node1.removeLoop(); // ✅ remove it
        cout << "List after removing the loop: ";
        node1.print();
    } else {
        cout << "No loop was detected" << endl;
    }

    return 0;
}


