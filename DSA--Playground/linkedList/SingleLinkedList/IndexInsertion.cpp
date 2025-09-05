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

    void insertAtIndex(int value,int index){
        Node *newNode=new Node;
        newNode->data=value;
        newNode->next=NULL;
        // if(head==NULL){
        //     head=newNode;
        //     return;
        // }
        if(index==0 || head==NULL){
            newNode->next=head;
            head=newNode;
            return;
        }
        Node *temp=head;
        int curIndex=0;
        while(temp!=NULL && curIndex<index-1){
            temp=temp->next;
            curIndex++;
        }
        if (temp == NULL) {
        cout << "Index out of range! Inserting at the end." << endl;
        return;
    }
        newNode->next=temp->next;
        temp->next=newNode;



    }
    void print(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
         cout << endl; 
    }
};
int main(){
    SingleLinkedList node1(3);
    node1.insertAtIndex(5,1);
    node1.print();
    
    node1.insertAtIndex(10,2);
     //node1.insertAtEnd(15);
      node1.insertAtIndex(45,3);
      node1.insertAtIndex(20,2);


    node1.print();
    return 0;
}
