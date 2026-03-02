#include <bits/stdc++.h>
using namespace std;
class heap{
    vector<int> arr;
public:
    heap(){
        arr.push_back(-1);

    }
    void insert(int val){
        arr.push_back(val);
        int idx=arr.size()-1;// since it is one based indexing
        int parent=idx/2;
        while(idx>1){
            if(arr[parent]<arr[idx]){
                swap(arr[parent],arr[idx]);
                idx=parent;
            }
            else{
                return;
            }
        }
    }
    void print(){
        int n=arr.size();
        for(int i=1;i<=n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    // in each and every case the head will be deleted
    void deletefromheap(){
        if(arr.size()==0){
            cout<<"Nothing to delete from heap"<<endl;
            return;
        }
        // we will replace the last value in the heap with the head then delete the last node after that we will place all the element to their respective position
        arr[1]=arr[arr.size()-1];
        arr.pop_back();
        // take the root to its correct position
        int i=1;
        while(i<arr.size()){
            int leftIdx=2*i;
            int rightIdx=2*i+1;
            int  n=arr.size();
            if(leftIdx<n && arr[i]<arr[leftIdx]){
                swap(arr[i],arr[leftIdx]);
                i=leftIdx;
            }
            else if(rightIdx<n && arr[i]<arr[rightIdx]){
                swap(arr[i],arr[rightIdx]);
                i=rightIdx;
            }
            else{
                return;
            }

        }




    }
    void printHeap(){
        int n=arr.size();
        for(int i=1;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<" ";

    }
};
int main(){
    heap h;
    h.insert(123);
    h.insert(124);
    h.insert(125);
    h.insert(126);
    h.insert(127);
    h.insert(128);
    h.insert(129);
    h.insert(30);
    h.insert(12);
    h.insert(32);
    
    h.deletefromheap();
    h.printHeap();


    return 0;
}