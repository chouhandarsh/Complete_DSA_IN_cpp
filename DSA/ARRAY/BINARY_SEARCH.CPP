// WE CAN APPLY  BINARY SEARCH ONLY WHEN THE ARRAY IS SHORTED
// WE CAN DO IT USING LINEAR SEARCH BUT ITS TIME COMPLEXITY IS O(N) 
//  IF WE WILL APPLY BINARY SEACH THEN THE TIME COMPLEXITY WILL O(logn) hence our code is more optimum
// Q WE HAVE TO SELECT A ELEMENT IN AN ARRRAY THROUGH BINARY SEARCH
// WE WILL FINND THE MIDDLE ELEMENTOF THE ARRAY THEN WE WILL COMPARE IT WITH THE TARGET IF THE MID VALUE WILL BE SMALLER THAN THE TARGET THEN WE WILL SEARCH IN THE SECOND HALF OF THE ARRY 
// HENCE WE WILL NOT TRAVEL THE WHOLE ARRAY
#include <iostream>
# include <vector>
using namespace std;
// first half of the array ranges from 0 to mid-1
// second half of the array ranges from mid+1 to n-1
// if we want to go in the first half of the array this means that we will update the value of end to mid-1
//if we want to go in the second half of the array then we will update the start value to mid+1 


int main() {
    vector <int>arr {-1,0,3,4,5,9,12};
    int target = 12;
    int n = arr.size();
    int start = 0;
    int end = n-1;
    while (start<=end){
        // int mid = (start+end)/2; maximum times we may have the condition in which there will be very large numbers so there sum will go to infinity so to prevent this we will do this 
        int mid = (start +(end-start)/2);
        if(target<arr[mid]){
            end = mid-1;

        }
        else if(target>arr[mid]){
            start = mid+1;
        }
        else{
            return mid;
        }

    }
    


    
    return -1;
}

