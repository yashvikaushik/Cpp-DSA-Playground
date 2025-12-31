#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
};
class SingleLinkedList{
    Node*head;
    public:
    SingleLinkedList(){
        head=NULL;
    }
    SingleLinkedList(int x){
        head=new Node;
        head->data=x;
        head->next=NULL;

    }
    void insertAtEnd(int val){
        Node*newNode=new Node;
        newNode->data=val;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            return;
        }
        Node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }

    // void conactenate(SingleLinkedList l2){
    //     if(l2.head==NULL){
    //         return;

    //     }
    //     Node* temp=l2.head;
    //     while(temp!=NULL){
    //         insertAtEnd(temp->data);
    //         temp=temp->next;
    //     }
    // }

    void sortedMerge(SingleLinkedList l2){
        if(l2.head==NULL){
            return;
        }
        if(head==NULL){
            Node*temp=l2.head;
            while(temp!=NULL){
                insertAtEnd(temp->data);
                temp=temp->next;
            }

            return;
        }

        Node*t1=head;
        Node*t2=l2.head;
        SingleLinkedList result;
        while(t1!=NULL && t2!=NULL){
            if(t1->data<t2->data){
                result.insertAtEnd(t1->data);
                t1=t1->next;

            }
            else{
                 result.insertAtEnd(t2->data);
                t2=t2->next;

            }
        }

        while(t1!=NULL){
            result.insertAtEnd(t1->data);
            t1=t1->next;
        }

        while(t2!=NULL){
            result.insertAtEnd(t2->data);
            t2=t2->next;
        }

        Node* cur = head;
    while (cur != NULL) {
        Node* nxt = cur->next;
        delete cur;
        cur = nxt;
    }

        head=result.head;
        result.head=NULL;
        

    }

    void print(){
        if(head==NULL){
            return;
        }
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

};
int main(){
    SingleLinkedList obj(5);
    obj.insertAtEnd(80);
    obj.insertAtEnd(800);
    SingleLinkedList obj1(1);
    obj1.insertAtEnd(50);
    obj1.insertAtEnd(60);
    obj.sortedMerge(obj1);
    obj.print();
    return 0;
}