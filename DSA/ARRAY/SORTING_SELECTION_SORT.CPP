//IN THIS SORT THE WHOLELOOP IS DEIVIDED INTO SORTED AND UNSORTED ARRAY
#include <iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i = 0; i<n-1;i++){
        int smallestIndex = i;
        for(int j = i+1;j<n;j++){
            if (arr[j]<arr[smallestIndex]){
                smallestIndex = j;
               
            }
            

        }
        swap(arr[i],arr[smallestIndex]);// it is done after trversing in whole  loop then finding the smallest element then we will swap it
        
        
    }
}
void printArray(int arr[],int n){
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}



int main() {
     int n = 5;
    int arr[]={4,1,5,2,3};
    selectionSort(arr,n);
    printArray(arr,n);
    
    return 0;
}