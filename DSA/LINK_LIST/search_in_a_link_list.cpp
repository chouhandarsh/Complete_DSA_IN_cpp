#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* convertArr2LL(vector<int> &arr){
    if(arr.empty()) return nullptr;
    Node* head = new Node(arr[0]);
    Node* mover = head; // at start they are same, it will change after some time
    for(int i=1;i<arr.size();i++){
        Node *temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}
int check( Node* head, int val){
    Node* temp = head;
    while(temp){
        if(temp->data== val) return 1;
        temp = temp ->next;
    }
    return 0;

}
int main(){
    vector <int> arr={2,4,6,8,9,10};
    Node *head = convertArr2LL(arr);
    cout<<check(head,4)<<endl;
}
