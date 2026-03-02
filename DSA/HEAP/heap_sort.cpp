// we know that the first element is the largest in all so when we will swap it with the largset number then we will get that the number has reached its correct position
// then we will do last--
// we will apply heapify to place the new node at its correct position then do the same
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
        int idx =arr.size()-1;
        // checking for the correct poition in the array
        while(idx>1){
            int parent = idx/2;
            if(arr[idx]>arr[parent]){
                swap(arr[idx],arr[parent]);
                idx=parent;

            }
            else{
                return;
            }
        }
    }
    void heapify(vector<int> &arr,int i){
        int n=arr.size();
        // the arr is 1 inexed
        int largest=i;
        int left=2*i;
        int right=2*i+1;
        if(left<n && arr[largest]<arr[left]){
            
            largest=left;

        }
        if(right<n && arr[largest]<arr[right]){
            
            largest=right;
        }
    }

    void print(){
        for(int i=1;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }
    void heapSort(vector<int> arr, int n){
        int size=n;
        while(size>1){
            swap(arr[size],arr[1]);
            size--;
        }
    }
    
};
int main(){
    heap h;
    h.insert(12);
    h.insert(14);
    h.insert(16);
    h.insert(134);
    h.insert(123);
    h.insert(1234);
    // we have an arry now we will apply heapify on this


    



    return 0;
}