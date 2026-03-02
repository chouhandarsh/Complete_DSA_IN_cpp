#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    public:
    Node(int data1, Node* next, Node * prev){
        data = data1;
        prev = NULL;
        next = NULL;
    }
};
Node * Arr2DLL(vector<int> arr){
    Node* head = new Node(arr[0],NULL,NULL);
    Node* prev = head;
    for(int i = 1;i<arr.size();i++){
        Node* curr = new Node(arr[i],NULL,prev);
        prev->next = curr;
        prev=curr;
    }
    return head;
};
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int c(Node* head){
    Node* currhead= head;
    int count=0;
    while(currhead->next !=NULL){
        count++;
        currhead=currhead->next;
    }
    return count;
}
int main(){
    vector<int > arr = {1,2,3,4,5,6,7,8};
    Node* head=Arr2DLL(arr);
    int ans = c(head);
    cout <<ans<<endl;
    
    return 0;
}