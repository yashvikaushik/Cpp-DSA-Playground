#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
 Node* cursor=NULL;
class CLL{
   
    public:
   
    CLL(){
        cursor=new Node;
        cursor->next=cursor;
        cursor->data=0;

    }
    CLL(int value){
        cursor=new Node;
        cursor->next=cursor;
        cursor->data=value;

    }
    void insertAtEnd(int value){
        Node* newNode=new Node;
        newNode->next=NULL;
        newNode->data=value;
        if(cursor==NULL){
            cursor=newNode;
            cursor->next=cursor;
        }
        newNode->next=cursor->next;
        cursor->next=newNode;
        cursor=newNode;
        
    }

    void split(Node *&fhalf){
        Node *slow=cursor->next;
        Node *fast=cursor->next;
        while(fast!=cursor && fast->next!=cursor){
            slow=slow->next;
            fast=fast->next->next;

        }
       fhalf=slow;
       Node*newHead=slow->next;
       fhalf->next=cursor->next;
       cursor->next=newHead;
        
    }
    void printList(Node* last) {
        if (!last) return;

        Node* head = last->next;
        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }

    Node* getCursor() { return cursor; }
   

};
int main() {
    CLL list;

    // Build list: 1 2 3 4 5 6
    for (int i = 1; i <= 5; i++)
        list.insertAtEnd(i);

    cout << "Original List: ";
    list.printList(list.getCursor());

    Node* fhalf = NULL;
    list.split(fhalf);

    cout << "First Half: ";
    list.printList(fhalf);

    cout << "Second Half: ";
    list.printList(list.getCursor());

    return 0;
}
