#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
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

    void headDeletion(){
        Node *temp=head;
        if(head==NULL){
            cout<<"the list is empty";
            return;
        }
       
        head=head->next;
         delete temp;
         temp=NULL;
    }

    void endDeletion(){
        if(head==NULL){
            cout<<"the list is empty"<<endl;
            return;
        }

        if(head->next==NULL){
            Node* temp=head;
            head=head->next;
            delete temp;
            temp=NULL;
            return;

        }

        Node *temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;

        }
        Node *nodeToDel=temp->next;
        temp->next=NULL;
        delete nodeToDel;
    }

    void indexDeletion(int index){
        if(head==NULL){
            cout<<"the list is empty";
            return;

        }
        if(index==0){
            Node*temp=head;
            head=head->next;
            delete temp;
            temp=NULL;
        }

        Node *temp=head;
        int i=0;
        while(temp->next!=NULL && i<index-1){
            temp=temp->next;
        }
        if(temp==NULL || temp->next==NULL){
            cout<<"invalid index";
            return;
        }
        Node *nodeToDel=temp->next;
        temp->next=nodeToDel->next;
        delete nodeToDel;
    }

    void deleteValueOccurence(int value){
        if(head==NULL){
            cout<<"the list is empty"<<endl;
            return;
        }
         while(head!=NULL && head->data==value){
            Node*temp=head;
            head=head->next;
            delete temp;
            temp=NULL;
            return;
         }

         if(head==NULL){
            cout<<"All the occurence of the value has been deleted"<<endl;
         }

         Node*temp=head;
         bool found=0;
         while(temp->next!=NULL){
            if(temp->next->data==value){
                Node*nodeToDel=temp->next;
                temp->next=nodeToDel->next;
                delete nodeToDel;
                found=1;
            }
            temp=temp->next;
         }

         if(!found){
            cout<<"value not found<<endl";
           

         }

         else{
            cout<<"deletion successful";
         }
        


        
        
    }

    void headInsertion(int x){
        Node *newNode=new Node;
        newNode->next=NULL;
        newNode->data=x;
        if(head==NULL){
            head=newNode;
            return;
        }
        newNode->next=head;
        head=newNode;

    }

    void print(){
        if(head==NULL){
            cout<<"the list is empty";
            return;
        }
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }

};
int main() {
    SingleLinkedList obj(10);
    obj.headInsertion(25);
    obj.headInsertion(45);
    obj.headInsertion(55);
    obj.headInsertion(35);
    obj.headInsertion(35);
    obj.headInsertion(55);
    obj.headInsertion(35);
    obj.print();
    // obj.headDeletion(); 
    // obj.endDeletion();
    // cout<<endl;
    // obj.indexDeletion(1);
    obj.deleteValueOccurence(55);
    cout<<endl;
    obj.print();   

   // obj.headDeletion();  

    return 0;
}