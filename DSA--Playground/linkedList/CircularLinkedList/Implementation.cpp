#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
class CircularLinkedlist{
    Node *cursor;
    public:
    CircularLinkedlist(){
        cursor=NULL;
    }
    CircularLinkedlist(int x){
        cursor=new Node;
        cursor->data=x;
        cursor->next=cursor;

    }

 void printNode(){
    Node *temp=cursor;
    do{
        cout<<temp->data<<" -> ";
        temp=temp->next;

    }while(temp!=cursor);

 }
};
int main(){
    CircularLinkedlist node1(5);
    node1.printNode();
    return 0;
}