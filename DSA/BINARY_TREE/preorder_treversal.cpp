#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
public:
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
int idx=-1;
Node* BuildTree(vector<int> preorder){
    idx++;
    // base Case
    if(preorder[idx]==-1){
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root->left=BuildTree(preorder);
    root->right=BuildTree(preorder);
    return root;    
};
void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
int main(){
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = BuildTree(preorder);
    preOrder(root);
    cout<<endl;
    return 0;
}