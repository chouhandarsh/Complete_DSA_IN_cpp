#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next=nullptr;
    public:
    Node(int data1){
        data= data1;
        next=nullptr;
    }
};
Node* Arr2CLL(vector<int> arr){
    Node* head= new Node(arr[0]);
    Node* tail= head;
    for(int i =1;i<arr.size();i++){
        Node* newNode = new Node(arr[i]);
        tail->next=newNode;
        tail= newNode;
    }
    tail->next=head;
    return head;


}

int main(){
    vector<int> arr={1,2,3,4,5,6};
    Arr2CLL(arr);
    return  0;
}