#include <bits/stdc++.h>
using namespace std;
class Node{
    int data;
    public:
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
Node* BuildTree(vector<int> arr){
    idx++;
    if(arr[idx]==-1){
        return NULL;
    }
    Node* root = new Node(arr[idx]);
    root->left=BuildTree(arr);
    root->right = BuildTree(arr);
    return root;
}
int height(Node* root ){
    if(root==NULL){
        return 0;
    }
    int leftHeight=height(root->left);
    int rightHeight=height(root->right);
    return max(leftHeight,rightHeight)+1;

}
int main(){
    vector<int> arr={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root= BuildTree(arr);
    cout<<"height : "<<height(root)<<endl;
    

    return 0;
}