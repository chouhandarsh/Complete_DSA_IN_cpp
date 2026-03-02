#include<bits/stdc++.h>
using namespace std;
// defining the data type of linklist
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1){
        data= data1;
        next = nullptr;
    }
};
Node* convertArr2LL(vector<int> arr){
    if(arr.empty()) return nullptr;
    Node *head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover -> next=temp;
        mover = temp;
    }
    return head;
}
void print(Node* head){
    while(head!= nullptr){
        cout<<head->data<<" ";
        head = head-> next;
    }
}
Node* remove_kth_element(Node* head, int k){
    if(head ==nullptr){
        return head;
    }
    //if k ==1 we will remove the first element then we will and point the pointer towards the the next element
    if(k==1){
        Node *temp = head;
        head=head->next;
        free(temp);
        return head;
    }

    // what we willl do in this is that we will point the pointer form previous to next-> next by doing this we will be able to remove that element
    // we will take a count variable and then we will check if it is equal to k and we will take which will be initiallized to null,
    // if any element is not equal to  k then we will change the value of previous as temp and  so on
    int count =0;
    Node* temp = head;
    Node* prev=NULL;
    while(temp!=NULL){
        count++;
        if(count==k){
            prev->next=temp->next;
            free(temp);
            break;
        }
        prev=temp;
        temp = temp->next;
        

    }
    return head;


}
int main(){
    vector<int> arr={1,2,3,4};
    Node* head =convertArr2LL(arr);
    Node* ans = remove_kth_element(head,1);
    print(ans);
    return 0;
}
