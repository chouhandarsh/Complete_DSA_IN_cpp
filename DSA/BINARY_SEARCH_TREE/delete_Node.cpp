#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    public:
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
Node* insert(Node* root, int val){
    if(root==NULL){
        return new Node(val);

    }
    if(val<root->data){
        root->left=insert(root->left,val);
    }
    else{
        root->right=insert(root->right,val);
    }
    return root;
}
Node* BST(vector<int> arr){
    Node* root=NULL;
    for(int val: arr){
        root=insert(root, val);
    }
    return root;
}
Node* getInordersucessor(Node* root){
    while(root!=NULL&& root->left!=NULL){
        root=root->left;
    }
    return root;

}
Node* delNode(Node* root,int key){
    // there are many cases in this if the node which we want to delete
    // is a last node then we can easily delete it
    // if it has both the left and the right child then we will have
    // to find the inorder sucessor of  the data when we will find then we will replace that Node with the inorder sucessor with the node which we want to delete then we will
    // delete the inorder sucessor in this way the BST prperty will be preservesd
    // the. inorder sucessor is the leftmost node in the rightmost subtree
    if(root==NULL){
        return NULL;

    }
    if(key<root->data){
        root->left=delNode(root->left,key);

    }
    else if(key>root->data){
        root->right=delNode(root->right,key);
    }
    else{ // when root->data==key
        if(root->left==NULL){
            Node* temp= root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            Node* temp= root->left;
            delete root;
            return temp;

        }
        else{ // both child are not null then we will use  this case
            Node* IS =getInordersucessor(root->right);
            root->data=IS->data;
            root->right = delNode(root->right, IS->data);



        }


    }
    return root;


}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    vector<int> arr={3,2,1,5,6,4};
    Node* root= BST(arr);
    inorder(root);
    cout<<endl;
    delNode(root,6);
    inorder(root);
    return 0;
}