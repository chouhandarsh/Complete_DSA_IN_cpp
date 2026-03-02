// if we have heap then the leaf node can be assumed as the individual heap as they are at the last and no left and right leaf present
// all thelast leaf are present from n/2 to n
// we have tp process from 1 to n/2;
// the loop will start from n/2 to 0 and put the array at their desired position
// this method is called hepefy 
// if the hepefy function will be called then it will put that number to its desired locatio
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
        int idx=arr.size()-1;
        
        while(idx>1){
            int parent = idx/2;
            if(arr[idx]>arr[parent]){
                swap(arr[idx],arr[parent]);
                idx=parent;
            }
            else{
                break;
            }

        }
        
        
    }
    void print(){
        int n= arr.size();
        for(int i=1;i<n;i++){
            cout<<arr[i]<<" ";

        }
        cout<<endl;
    }
    // its time complexity is log(n)
    void heapify(int arr[], int n, int i){
        int largest=i;
        int left =2*i;
        int right=2*i+1;
        if(left<n && arr[largest]<arr[left]){
            largest=left;
        }
        if(right<n && arr[largest]<arr[right]){
            largest=right;
        }
        if(largest!=i){
            // it has changed some error has occured
            swap(arr[largest],arr[i]);
            // might be still it is not at its correct position

        }
    }
};

int main() {
    heap h;
    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        h.heapify(arr,n,i);

    }
    cout<<"Printing array now "<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
        

    }
    cout<<endl;

}


