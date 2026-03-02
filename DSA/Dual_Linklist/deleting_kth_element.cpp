#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    public:
    Node(int data1, Node* prev1, Node* next1){
        data=data1;
        prev= prev1;
        next=next1;
    }
};
Node* Arr2LL(vector<int> arr){
    Node* head= new Node(arr[0],NULL,NULL);
    Node* prev = head;
    for(int i =1;i<arr.size();i++){
        Node* temp= new Node(arr[i],prev,NULL);
        prev->next = temp;
        prev= temp;
    }
    return head;
}
void Deleting_Kth(Node*head, int k ){
    int count =1;
    Node* temp = head;
    while(count!=k){
        temp= temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    temp->next=NULL;
    temp->prev=NULL;
    delete(temp);
    

}
void print(Node* head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8};
    Node* head=Arr2LL(arr);
    Deleting_Kth(head, 4);
    print(head);

    return 0;
}