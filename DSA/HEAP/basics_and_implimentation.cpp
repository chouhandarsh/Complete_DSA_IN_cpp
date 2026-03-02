// we are using the 1 based indexing
// importtant concept is that ith index left child is 2*i and right is 2*i+1
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
    void print(){
        for(int i=1;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

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
    h.print();


    return 0;
}