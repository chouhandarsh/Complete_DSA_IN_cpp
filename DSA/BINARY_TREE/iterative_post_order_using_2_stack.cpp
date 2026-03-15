#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
public:
    Node(int data1){
        data = data1;
        left= NULL;
        right= NULL;

    }
};
int idx=-1;
Node* TreeFormation(vector<int> arr){
    idx++;
    // base case
    if( arr[idx]==-1 ){
        return NULL;

    }
    Node* root = new Node(arr[idx]);
    root->left= TreeFormation(arr);
    root->right = TreeFormation(arr);
    return root;

};
vector<int> Iterative_inorder(Node* root){
    vector<int> postOrder;
    if(root==NULL){
        return postOrder;
        stack<Node*> s1, s2;

        s1.push(root);
        while(!s1.empty()){
            // in the 2nd stack we will push first node then right then left so the order after popping  will be left right node
            Node* node= s1.top();
            s1.pop();
            if(root->left!=NULL){
                s1.push(root->left);

            }

            if(root->right!=NULL){
                s1.push(root->right);
            }
            

        }
        while(!s2.empty()){
            Node* curr=s2.top();
            postOrder.push_back(curr->data);
            s2.pop();
        }
    }
}
int main(){
    
    return 0;
}