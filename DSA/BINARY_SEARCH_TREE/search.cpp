#include <bits/stdc++.h>
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
    // if the node is smaller then we will attach in to the ;eft
    // if it is larger then we will attch it to the right 
    if(val<root->data){
        root->left=insert(root->left,val);

    }
    else{
        root->right=insert(root->right,val);
    }
}

Node* bst(vector<int> arr){
    Node* root=NULL;
    for(int val:arr){
        root=insert(root,val);
    }
    return root;
    
};
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    

}
bool search(Node* root, int key){
    if(root==NULL){
        return false;
    }
    if(root->data==key){
        return true;
    }
    if(key<root->data){
        search(root->left,key);
    }
    else{
        search(root->right,key);
    }

}
int main(){
    vector<int> arr={3,2,1,5,6,4};
    Node* root= bst(arr);
    bool ans= search(root,19);
    cout<<ans<<endl;
    return 0;
}