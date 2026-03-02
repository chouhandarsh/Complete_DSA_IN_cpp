#include <bits/stdc++.h>
using namespace std;
// data type
class Node{
    public:
    int data;
    Node* next;
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* converion_of_arr(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void print(Node*head){
    Node*temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
};
Node* inserting(Node* head, int val){
    Node* temp = new Node(val);
    temp->next = head;
    head =temp;
    return head;



}
int main(){
    vector<int> arr= {1,2,3,4,5};
    Node* head = converion_of_arr(arr);
    head = inserting(head,0);
    print(head);
    return 0;
}