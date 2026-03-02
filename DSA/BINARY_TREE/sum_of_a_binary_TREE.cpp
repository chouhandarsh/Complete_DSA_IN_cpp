#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    public:
    Node(int val){
        data =val;
        left=NULL;
        right=NULL;
    }
};
int idx=-1;
Node* Build_Tree(vector<int> arr){
    idx++;
    if(arr[idx]==-1){
        return NULL;
    }
    Node* root= new Node(arr[idx]);
    root->left=Build_Tree(arr);
    root->right=Build_Tree(arr);
    return root;
   

};
void Print(Node* root){


}


int main(){
    return 0;
}