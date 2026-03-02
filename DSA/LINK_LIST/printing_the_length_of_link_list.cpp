#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;// it is the value
    Node* next;// it is the pointer to that data which 
    public:
    Node(int data1){
        data=data1;
        next = nullptr;

    }
};
// now we have defined a new data type whose name is Node
// for creating a function we need to define the data type
// which will be the  output
Node* converArr2LL(vector<int> arr){
    if(arr.empty()) return nullptr;
    Node* head = new Node(arr[0]);
    Node* mover = head;
    //at the begining both the mover and the header was pointing towards to the the first element
    for(int i=0;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
    }
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head = convertArr2LL(arr[0]);
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp-> next;
    }

    return 0;
}
