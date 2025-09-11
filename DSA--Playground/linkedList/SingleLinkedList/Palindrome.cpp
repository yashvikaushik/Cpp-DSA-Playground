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

    SingleLinkedList(int value){
        head=new Node;
        head->data=value;
        head->next=NULL;
    }

    Node* reverse(Node *head){
        if(head==NULL || head->next==NULL){
            return head ;
        }

        Node*newHead=reverse(head->next);
        head->next->next=head;
        head->next=NULL;

        return newHead;

    }

    bool isPalindrome(){
        Node* fast=head;
        Node* slow=head;
        if(head->next==NULL){
            return true;
        }
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        Node *middle=slow;
        Node* firstHalf=head;
        Node *secondHalf=reverse(middle->next);
        Node*second=secondHalf;
        while(second!=NULL){
            if(firstHalf->data!=second->data){
                return false;
            }

            firstHalf=firstHalf->next;
            second=second->next;
        }
        return true;
    }

      void insertEnd(int value) {
        Node* newNode = new Node{value, NULL};
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }

    void printList() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    SingleLinkedList list;
    list.insertEnd(1);
    list.insertEnd(2);
    list.insertEnd(2);
    //list.insertEnd(1);

    list.printList();

    if (list.isPalindrome())
        cout << "Palindrome\n";
    else
        cout << "Not Palindrome\n";

    return 0;
}