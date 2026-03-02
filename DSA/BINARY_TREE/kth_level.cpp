#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    public:
    Node(int val){
        data= val;
        left=right=NULL;
    }
};
int idx=-1;
Node* BuildTree(vector<int> arr){
    idx++;
    if(arr[idx]==-1){
        return NULL;
    }
    Node* root= new Node(arr[idx]);
    root->left=BuildTree(arr);
    root->right=BuildTree(arr);
    return root;

}
void Kth_level(Node* root , int k){
    // base case
    if(root==NULL){
        return;
        
    }
    // Base Case
    if(k==1){
        cout<<root->data;
        return;
    }
    // we will do the most simple task and call the function recusively to do the rest work
    Kth_level(root->left,k-1);
    Kth_level(root->right,k-1);

}

int main(){
    vector<int> arr={5,8,2,4, -1, -1,6, -1, -1,1, -1, -1,9,3, -1, -1,
    7, -1, -1};
    Node* root= BuildTree(arr);
    Kth_level(root,3);

    return 0;
}