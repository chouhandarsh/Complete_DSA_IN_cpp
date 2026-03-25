#include <bits/stdc++.h>
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
class Solution{
public:
    Node* InsertNode(Node* root, int val){
        if(root==NULL){
            Node* node = new Node(val);
            return node;

        }
        Node* curr= root;
        // there will always be  a leaf node where it should be inserted
        while(true){
            if(curr->data>val){
                if(curr->left!=NULL){
                    curr=curr->left;

                }
                else{
                    Node* node= new Node(val);
                    curr->left= node;
                    break;
                }


            }
            else if(curr->data<val) {
                if(curr->data<val){
                    if(curr->right!=NULL){
                        curr=curr->right;
                    }
                    else{
                        Node* node = new Node(val);
                        curr->right= node;
                        break; 
                    }
                }
            }
            // if break it should not contain duplicate
            else{
                break;
            }
        }
        return root;
    }
};
int main(){
    return 0;
}