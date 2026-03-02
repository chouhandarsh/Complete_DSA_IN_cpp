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
        left=NULL;
        right=NULL;
    }

};
int idx=-1;
Node* BuildTree(vector<int>preorder){
    idx++;
    // base case
    if(preorder[idx]==-1){
        return NULL;
    }
    Node* root =new Node(preorder[idx]);
    root->left= BuildTree(preorder);
    root->right=BuildTree(preorder);
    return root;

}
void inOrder(Node* root){
    if(root==NULL){
        return;

    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
  

}
int main(){
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = BuildTree(preorder);

    inOrder(root);
    return 0;
}