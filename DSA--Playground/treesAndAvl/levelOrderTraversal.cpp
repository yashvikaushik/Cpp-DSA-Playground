#include<iostream>
#include<queue>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
};
class levelTraversal{
    Node *root;
    public:
    levelTraversal(){
        root =NULL;
    }

    Node* createNode(int value){
        Node* newNode=new Node();
        newNode->data=value;
        newNode->left=NULL;
        newNode->right=NULL;
        return newNode;
    }

    Node* buildTree(){
        cout<<"enter data"<<endl;
        int data;
        cin>>data;
        Node *newroot=createNode(data);

        if(data==-1){
            return NULL;
        }
        else{

        cout<<"Enter the data for left node"<<endl;
        newroot->left=buildTree();
        cout<<"Enter the data for right node"<<endl;
        newroot->right=buildTree();
        }

        return newroot;
    }

    void constructTree(){
        root=buildTree();
    }

    void levelOrderTraversal(){
        queue<Node*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            Node*temp=q.front();
            q.pop();
            if(temp==NULL){
                cout<<endl;
                if(!q.empty()){
                    q.push(NULL);
                }
            }
            else{
                cout<<temp->data<<" ";
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            }
        }


    }

};

int main(){
    levelTraversal tree;
    Node*root;
    tree.constructTree();
    tree.levelOrderTraversal();


    return 0;
}