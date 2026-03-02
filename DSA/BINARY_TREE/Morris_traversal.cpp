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
int idx=-1;
Node* Build_Tree(vector<int> arr){
    idx++;
    // base case
    if(arr[idx]==-1){
        return NULL;
    }
    Node* root= new Node(arr[idx]);
    root->left= Build_Tree(arr);
    root->right=Build_Tree(arr);
    return root;

};
vector <int> morris_traversal(Node*root){
    vector <int> inorder;
    Node* curr= root;
    while(curr!=NULL){
        if(curr->left==NULL){
            inorder.push_back(curr->data);
            curr=curr->right;
        }
        // if there exist a left NOode
        // then i will find the last guy of the right subtree and connect the last guy to the root
        else{
            Node* prev = curr->left;
            while(prev->right!=NULL && prev->right!=curr){
                // if we will not add the last and condition then we will stuck in the loop so to fix this we have added  that conditon
                prev=prev->right;
            }
            // first case if it comes to be  NULL
            if(prev->right==NULL){
                //we will create a thread
                prev->right=curr;
                curr=curr->left;
                // as we have do this traversal so we will move to the left
            }
            else{
                // we will berak the Node then connect
                prev->right=NULL;
                inorder.push_back(curr->data);
                curr=curr->right;
            }

        }

    }

}



};
int main(){

    return 0;
}
