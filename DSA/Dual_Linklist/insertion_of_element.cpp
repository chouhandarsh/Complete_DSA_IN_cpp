// getting a garbage value
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    public:
    Node(int data1, Node* prev, Node* next){
        data = data1;
       prev =NULL;
       next= NULL;
        
    };   
};
Node* Arr2LL(vector<int> arr){
    // head
    Node *head = new Node(arr[0],NULL,NULL);
    Node* prev = head;
    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i],NULL,prev);
        prev->next = temp;
        prev= temp;
    }
    return head;
};
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
   
};
void Element_Insetion(Node* head, int n , int pos){
    Node* temp = head;
    int count = 1;
    while(count!= pos){
        count++;
        temp = temp->next;
    }
    
}
int main(){
    vector <int> arr = {1,2,3,4,5,6,7};
    Node *head =Arr2LL(arr);
    Node* ans = headDeletion(head);

    print(ans);

    return 0;
}