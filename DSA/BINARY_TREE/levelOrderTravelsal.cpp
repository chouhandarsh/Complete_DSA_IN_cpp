#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
int idx=-1;
Node* BuildTree(vector<int>preorder){
    idx++;
    if(preorder[idx]==-1){
        return NULL;
    }
    Node* root= new Node(preorder[idx]);
    root->left=BuildTree(preorder);// left child
    root->right=BuildTree(preorder);// right child
    return root;


}
void levelTraversal(Node* root){
    // we will use queue data structure and we will push the value of Node and then we will pop the root and then we will store the value of root and then 
    //we will push the value of root->left and root->right
    queue<Node* > q;
    q.push(root);
    while(q.size()>0){
        Node* curr=q.front();
        q.pop();
        cout<<curr->data<<" ";  
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
     
}
int main(){
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = BuildTree(preorder);
    levelTraversal(root);
    return 0;
}