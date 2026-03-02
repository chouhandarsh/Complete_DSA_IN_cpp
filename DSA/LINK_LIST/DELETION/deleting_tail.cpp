#include <bits/stdc++.h>
using namespace std;
// define the data type of ll
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convertArr2LL(vector<int> arr){
    if(arr.empty()){
        return nullptr;
    }
    Node* head  = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover ->next=temp;
        mover = temp;
    }
    return head;
};
// we will create a function which will print the linklist
void print(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp =temp->next;
    }
}
Node *deleteTail(Node* head){
    // there are two cases in which we cannot remove the tail the first is when there is no element in the LL or there is an empty ll
    if(head==nullptr || head-> next==nullptr){
        return nullptr;
    }
    Node* temp= head;
    // this loop will increase the pointer till   
    while(temp->next->next!=nullptr){
        temp = temp-> next;

    }
    // we will delete the last elemet from the link list
    delete(temp-> next);
    temp->next=nullptr;
    return head;

}
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    Node* head = convertArr2LL(arr);
    head = deleteTail(head);
    // we want to print the arr
    // we have to print the deleted arry
    print(head);
    


    return 0;
}