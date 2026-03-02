#include <bits/stdc++.h>
using namespace std;
// defining the data type of LL
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1){
        data=data1;
        next = nullptr;
    }
};
Node* convertArr2LL(vector<int> arr){
    if(arr.empty()) return nullptr;
    Node* head =new Node(arr[0]);
    Node * mover = head;
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;   
}
void print(Node* head){
    Node* temp = head;
    while(temp !=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* deleting_element(Node* head, int val){
    // we will search for the value then we will link the previos element to the next element then  deleting the target  element
    // for tarversing the whole ll we will use that logic that as we know that the last element in the link list has
    // value of assress = NULL;
    if(head==NULL) return head;
    if(head-> data==val){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;

    }
    Node* temp = head;
    Node* prev  = NULL;
    while(temp!=  NULL){
        if(temp->data==val){
            prev->next = temp->next;
            free(temp);
            break;
        }
        prev = temp;
        temp=temp->next;
    }
    return head;
    
    
}
int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    Node* test=convertArr2LL(arr);
    Node* ans= deleting_element(test, 3);
    print(ans);


    
    return 0;
}