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
int CountNode(Node* root){
    if(root==NULL){
        return 0;

    }
    int leftCount= CountNode(root->left);
    int rightCount= CountNode(root->right);
    return leftCount+rightCount+1;
    
}
int main(){
    vector<int> arr={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root= BuildTree(arr);
    int ans=CountNode(root);
    cout<<ans<<endl;

    return 0;
}