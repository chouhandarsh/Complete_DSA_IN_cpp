#include <bits/stdc++.h>
using namespace std;
// defing the data type of LL
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1){
        data=data1;
        next = NULL;
    }
};
// conversion of arr to LL
Node* arr2LL(vector<int> arr){
    // head
    Node* head = new Node(arr[0]);
    Node* mover= head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
};
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
};
Node* end_insertion(Node* head, int num){
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    // we reached the last element;
    Node* curr = new Node(num);
    temp->next=curr;
    return head;
}
int main(){
    vector<int> arr= {1,2,3,4,5};
    Node* head = arr2LL(arr);
    head = end_insertion(head,0);
    print(head);
    return 0;
}