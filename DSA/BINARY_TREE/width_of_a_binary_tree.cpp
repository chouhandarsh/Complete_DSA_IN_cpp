#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
public:
    Node(int data){
        this->data;
        left=NULL;
        right=NULL;

    }
};
int idx=-1;
Node* BinaryTree(vector<int> arr){
    idx++;
    if(arr[idx]==-1){
        return NULL;
    }
    Node* root= new Node(arr[idx]);
    root->left= BinaryTree(arr);
    root->right = BinaryTree(arr);
    return root;

};
int Width_of_tree(Node* root ){

    int ans=0;
    queue<pair<Node*, int>> q;
    q.push({root,0});
    // the first element in the queue will be the the most min in the binary tree so we will now substract them form each one of then
    // the size of queue is equal to the width of current level


    while(!q.empty()){
        int size = q.size();
        int nmin = q.front().second;
        int first, last;
        for(int i=0;i<size;i++){
            int curr_id = q.front().second-nmin;
            Node* root = q.front().first;
            q.pop();
            if(i==0){
                first = curr_id;
            }
            if(i==size-1){
                last = curr_id;
            }
            if(root->left){
                q.push({root->left,curr_id*2+1});
            }
            if(root->right){
                q.push({root->right, curr_id*2+2});
            }
        }
        ans =  max(ans, last-first+1);



    }
    return ans;



}

int main(){
    return 0;
}