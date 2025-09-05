#include <iostream>
using namespace std;
struct  Node
{
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
    void print(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }

    }
};
int main(){
    SingleLinkedList node1(5);
    node1.print();
    return 0;
}