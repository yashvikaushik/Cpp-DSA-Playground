#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

class Stack{
    Node *top;
    public:
    Stack(){
        top=NULL;
    }

    void push(int value){
        Node *newNode=new Node;
        newNode->data=value;
        newNode->next=NULL;
        if(top==NULL){
            top=newNode;
            return;
        }

        newNode->next=top;
        top=newNode;
    }

    void pop(){
        if(top==NULL){
            cout<<"Stack underflow"<<endl;
            return;
        }
        Node* temp=top;
        top=top->next;
        delete temp;
    }

    bool isEmpty(){
        if(top==NULL){
            cout<<"the stack is empty"<<endl;
            return true;
        }
        else{
            cout<<"the stack is not empty"<<endl;
            return false;
        }

    }
    void print(){
        if(top==NULL){
            cout<<"the list is empty"<<endl;
            return;
        }
        Node *temp=top;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }

    }
};
int main(){
    Stack s;
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.print();
    // s.pop();
    // cout<<"----------"<<endl;
    // s.print();
    // cout<<"----------"<<endl;
    // s.pop();
    // s.print();
    s.isEmpty();

    return 0;
}