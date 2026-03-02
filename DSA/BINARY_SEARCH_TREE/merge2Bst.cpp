#include <bits/sdtc++.h>
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
};
Node* insert(Node* root, int val){
    if(root==NULL){
        return new Node(val);
    }
    if(root->data>val){
        root->left= insert(root->left,val);
    }
    else{
        root->right=insert(root->right, val);
    }
    return root;
}

Node* BST(vector<int> arr){
    Node* root= NULL;
    for(int val: arr){
        root=insert(root, val);
    }
    return root;

}
void print(Node* root){
    if(root==NULL){
        return;
    }
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}
void inorder(Node* root, vector<int> &arr){
    if(root==NULL){
        return;
    }
    inorder(root->left,arr);
    arr.push_back(root->data);
    inorder(root->right,arr);
}
void merge(vector<int> arr1,vector<int> arr2, vector<int> &merge){
    int i=0;
    int j=0;
    while(i<arr1.size()&&j<arr2.size()){
        if(arr1[i]<arr2[j]){
            merge.push_back(arr1[i]);
            i++;
        }
        else{
            merge.push_back(arr2[j]);
            j++;
        }



    }
    while(j<arr2.size()){
        merge.push_back(arr2[j]);
        j++;
    }
    while(i<arr1.size()){
        merge.push_back(arr1[i]);
        i++;
    }

};
int main(){
    vector<int> arr1={5, 3, 7, 2, 4, 6, 8};
    vector<int> arr2={10, 9, 12, 11, 13};
    Node* root1=BST(arr1);
    Node* root2=BST(arr2);
    vector<int> vec1;
    vector<int> vec2;
    inorder(root1,vec1);
    inorder(root2,vec2);
    vector<int> mergedVec;
    // now we will have to merge them
    merge(vec1,vec2,mergedVec);
    Node* root= BST(mergedVec);
    print(root);
    return 0;
}//