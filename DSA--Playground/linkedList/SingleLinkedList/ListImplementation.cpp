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
        cout<<"default constructor"<<endl;

    }

    SingleLinkedList(int value){
        head=new Node();
        head->data=value;
        head->next=NULL;
        cout<<"parameterised constructor"<<endl;
    }

    Node* getAddress(){
        if(head!=NULL)
        return head;
        else 
        return NULL;

    }

    int getData(){
        if(head->data>=0){
            return head->data;
        }
        else{
            return -1;
        }
    }

};

int main(){
     SingleLinkedList node1(5);
    cout<<node1.getAddress()<<endl;
    cout<<node1.getData()<<endl;
     SingleLinkedList node2;
     cout<<node2.getAddress()<<endl;
    cout<<node2.getData()<<endl;

      
     

    return 0;
}