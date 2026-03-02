// LEFT<PARENT<RIGHT
// we can apply binary search in this tree
// time complexity is O(height)--> O(logn)
// in inorder-traversal we will get sorted array
// formation of bst
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        right=left=NULL;

    }
};
Node* insert(Node* root,int val){
    if(root==NULL){
        return new Node(val);
    }
    if(val<root->data){
        root->left=insert(root->left,val);
    }
    if(val>root->data){
        root->right=insert(root->right,val);
    }
    return root;

}
Node*buildBST(vector<int> arr){
    Node* root=NULL;
    for(int val: arr){
        root=insert(root,val);
    }
    return root;


}
int min= INT8_MIN;
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    vector<int> arr={3,2,1,5,6,4};
    Node* root=buildBST(arr);
    inorder(root);

    return 0;
}
