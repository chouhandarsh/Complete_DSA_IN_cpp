// COMPARE THE ADJACENT ELEMENT AND THEN SWAP 
// IN FIRST ITERATION AND LARGEST ELEMENT REACHES AT THE LAST
// WE WILL HAVE N-1 ITERATION
#include <iostream>
using namespace std;
void bubbleSort(int arr[],int n){// its time comlexity is 0(n^2) but the most optimum is n log n
    for(int i = 0; i<n-1;i++){
        // a little bit of optimization we will assume optimization is not done inside the loop if it is done then we will convert its value to true and we found it to be false then we will return it 
        bool isSwap = false;

        for(int j = 0; j<n-1-i;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }

        }
        if(!isSwap){
            return;
        }

    }
}
void printArray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
}

int main() {
    int n = 5;
    int arr[]={4,1,5,2,3};
    bubbleSort(arr,n);
    printArray(arr,n);
    
    return 0;
}
