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

Node* prevew =NULL;
void FlattenTree(Node* head){
    if(head==NULL) return;
    // this is like reverse preorder
    FlattenTree(head->right);
    FlattenTree(head->left);
    head->right= prevew;
    head->left=NULL;
    prevew=  head;
}
int main(){
    return 0;
}