#include <iostream>
using namespace std;
# include <vector>
int main() {
    vector <int> arr{3,4,5,6,7,0,1,2};
    // in this we can find that atleast one part of the sorted array will be sorted array hence we can apply binary search into that part
    // to check if it is in the sorted part of array or not we will chech  if A[st]<=targer<=A[mid] if it is so then we can conclude that it is in the sorted part of the array and then we can apply binary search into it 
    // if it is not so then we will have to apply linear search into half part only
    // how to check if the left half is sorted or not
    // if the start<mid then left half is sorted
    // if the end > mid then right is sorted
    


 
    
    return 0;
}