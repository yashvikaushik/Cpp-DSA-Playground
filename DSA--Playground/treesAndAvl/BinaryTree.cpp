#include <iostream>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
};
class BinaryTree{
    Node*root;
    public:
    BinaryTree(){
        root=NULL;
    }
Node* createNode(int value){
    Node *newNode=new Node();
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;

}

Node * BuildTree(Node *root){
    cout<<"Enter the data"<<endl;
    int da;
    cin>>da;
    if(da==-1){
        return NULL;
    }
    

else{
    Node *newNode=createNode(da);
    cout<<"Enter the data for the left node"<<endl;
    newNode->left=BuildTree(newNode->left);
    cout<<"Enter the data for the right node"<<endl;
    newNode->right=BuildTree(newNode->right);
    return newNode;
}

   



}

void constructTree(){
    root=BuildTree(root);
}

};
int main(){
    Node *root;
    BinaryTree tree;
    tree.constructTree();
    
    return 0;
}