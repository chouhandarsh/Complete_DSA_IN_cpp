#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
public:
    Node(int data){
        this->data =data;
        left =NULL;
        right=NULL;

    }
};
int idx=-1;
Node* BuildTree(vector<int> &arr){
    idx++;
    if(arr[idx]==-1){
        return NULL;
    }
    Node* root= new Node(arr[idx]);
    root->left= BuildTree(arr);
    root->right= BuildTree(arr);
    return root;

};
Node* DeleteNode(Node* root, int key){
    // the code is for the first part
    if(root==NULL){
        return NULL;
    }
    if(key<root->data){
        root->left =DeleteNode(root->left, key);
    }
    else if(key >root->data){
        root->right = DeleteNode(root->right,key);
    }
    else{
        // Node found
        // No left chila
        if(root->left==NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        
    }
    

    
}
int main(){
    return 0;
}