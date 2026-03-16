#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
public:
    Node(int data){
        this->data=data;
        left= NULL;
        right=NULL;
    }

};
int idx=-1;
Node* BuildTree(vector<int> arr){
    idx++;
    if(arr[idx]==-1){
        return NULL;
    }
    Node* node= new Node(arr[idx]);
    node->left= BuildTree(arr);
    node->right =BuildTree(arr);
    return node;
}
// so we will traverse from head to  left and right if not present then  when both left and right will be null then we will travel the leaves 
// then for the right part we will start from the right and take right if present if not present then we will take left and again if both are null then preorder
bool isLeaf(Node* node){
    if(node->left==node->right==NULL){
        return true;
    }
    return false;
}
void addLeftBoundary(Node* root , vector<int>& res){
    Node* curr = root->left;
    while(curr){
        if(!isLeaf(curr)){
            res.push_back(curr->data);
        }
        if(curr->left){
            curr=curr->left;
        }
        else{
            curr=curr->right;
        }
    }
}
// but one thing to be noted is that we will have to start from the back so we will first store all things into a vector then pop them and store in the main vector
void addRightBoundary(Node* root, vector<int>& res){
    Node* curr = root->right;
    vector<int> tmp;
    while(curr){
        if(!isLeaf(curr)) tmp.push_back(curr->data);
        if(curr->right) curr=curr->right;
        else curr = curr->left;
    }
    for(int i= tmp.size()-1;i>=0;i--){
        res.push_back(tmp[i]);

    }
    
}
void addLeaves(Node* root, vector<int> & res){
    if(isLeaf(root)){
        res.push_back(root->data);
        return;
    }
    if(root->left){
        addLeaves(root->left, res);
    }
    if(root->right){
        addLeaves(root->right,res);
    }
};
class Solution{
public:
    vector<int> printBoundary(Node* root){
        vector <int> res;
        if(!root) return res;
        if(!isLeaf(root)) res.push_back(root->data);
        addLeftBoundary(root, res);
        addLeaves(root, res);
        addRightBoundary(root, res);
        return res;
    }
};
int main(){
    return 0;
}