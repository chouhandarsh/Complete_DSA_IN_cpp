# include <iostream>
using namespace std;
void reverseArray(int arr[],int sz){ // Pass by reference
    int start = 0;
    int end = sz-1;
    while (start < end){
    swap(arr[start],arr[end]);
    start++;
    end--;
    }
}
int main(){
    int arr[]={22,334,53,5,44,34,5};

    int sz = 7;
    reverseArray(arr,sz);
    for(int j = 0; j<sz;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    return 0;
}