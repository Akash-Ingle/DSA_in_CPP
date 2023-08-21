#include <iostream>
#include <queue>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;
    node(int d){
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }
};

node* buildTree(node* root) {
    int data;
    cout<<"Enter the data: "<<endl;
    cin>>data;
    root = new node(data);
    if(data==-1) return NULL;
    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            // purana level complete traverse ho chuka hai
            cout<<endl;
            if(!q.empty()){ // q still has some child nodes
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
    }
}

void inorder(node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    node* root = NULL;
    // building the tree
    root = buildTree(root);
    // Printing the level order traversal
    cout<<"Level order traversal: "<<endl;
    levelOrderTraversal(root);
    cout<<endl<<"Inorder traversal: ";
    inorder(root);
    cout<<endl<<"Preorder traversal: ";
    preorder(root);
    cout<<endl<<"Postorder traversal: ";
    postorder(root);

    return 0;
}