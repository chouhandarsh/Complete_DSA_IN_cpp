#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
public:
    Node(int data){
        this->data = data;
        left=NULL;
        right=NULL;
    }

};
int idx=-1;
Node* BuildTree(vector<int> arr){
    idx++;
    if(idx>=arr.size()||arr[idx]==-1){
        return NULL;
    }
    Node* node = new Node(arr[idx]);
    node->left = BuildTree(arr);
    node->right = BuildTree(arr);
    return node;
}
// we will  use the logic of  height of tree and in between we will add the conditon for the  check of the balanced and if it is not balanced then we will store -1 else we will store the current height
//  if -1 then we will return  false else true;
int Height(Node* root){
    if(root==NULL){
        return 0;
    }
    int lH = Height(root->left);
    int rH = Height(root->right);
    if(abs(lH-rH)>1){
        return -1;
    }
    return 1+max(lH,rH);
}
bool isBalanced(Node* root){
    if(Height(root)==-1){
        return false;
    }
    return true;


}
int main(){
    return 0;
}