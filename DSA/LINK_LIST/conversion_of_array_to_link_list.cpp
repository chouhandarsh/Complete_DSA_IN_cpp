#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    public:
    Node(int data1){
        data = data1;
        next= nullptr;
    }
};
Node* convertArr2LL(vector<int> &arr){
    if(arr.empty()) return nullptr;
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i =1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover ->next = temp;
        mover = temp;
    }
    return head;
};
int lengthofLL(Node *head){
    int cnt=0;
    Node *temp = head;
    while(temp){
        temp = temp-> next;
        cnt++;
    }
    return cnt;
}
int main() {
    vector<int> arr = {2,3,4,5,6};
    Node* head =convertArr2LL(arr);
    cout<<lengthofLL(head)<<endl; 
    return 0;
}