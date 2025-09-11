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

    bool detectLoop(){
        Node* temp=head;
        map<Node *,bool> visisted;
        while(temp!=NULL){
            if(visisted[temp]==true){
                cout<<"present on "<<temp->data<<endl;
                return true;
            }
            visisted[temp]=true;
            temp=temp->next;

        }
        return false;

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
    Node* getHead(){
    return head;
}

};
// a main from ai with a loop containing list
int main(){
    SingleLinkedList node1;
    node1.insertAtHead(5);
    node1.insertAtHead(10);
    node1.insertAtHead(45);
    node1.insertAtHead(30);

    // ✅ Create a loop manually
    // Find the head and make the last node point to one of the earlier nodes
    Node* temp = node1.getHead();  // <-- we’ll need a getter for head
    Node* last = temp;
    while(last->next != NULL){
        last = last->next;
    }
    // Now last is the last node (5)
    // Make it point to node with data = 45 (for example)
    last->next = temp->next;  // loop: 5 -> 10 -> 45 -> 30 -> 45 ...

    bool res = node1.detectLoop();
    if(res==true){
        cout<<"loop was detected"<<endl;
    }
    else{
        cout<<"no loop was detected"<<endl;
    }

    // ❌ Do NOT call print() now — it will go infinite because of the loop
    return 0;

}