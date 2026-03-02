#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> rotate(vector<int>& nums, int k) {
        
    int n = nums.size();
    k = k%n;
    reverse(nums.begin(),nums.begin()+n-k);
    reverse(nums.begin()+n-k,nums.end());
    reverse(nums.begin(),nums.end()); 
    return nums;
 } 

int main() {
 
        // this is not the most optimized solution so we will do it again
    /*void rotate(vector<int>& nums, int k) {
        vector<int> temp;
        int n = nums.size();
        for(int i =n-k;i<n;i++){
            temp.push_back(nums[i]);
        }
        for(int j =n-1;j>=k;j--){
            nums[j]=nums[j-k];
        }
        for(int l = 0;l<k;l++){
            nums[l]=temp[l];
        }*/
    
        
        // the above code has the time complity of O(k)+O(n-k)+O(k) 
        // the net time complexity is O(n+k)
        // the space complexity is O(2)

        // the optimzed solution will be the we will reverse the array from 0 n-k and then n-k to n-1 
        // then we will revese the whole arrray then we will get the rotated array
        // the time complxity in this case will be O(2n) 

        // the space complexity will be O(1) we are not using any thing extra
        vector<int> arr {1,2,3,5,6,7,8,9};
        int l = 3;
        rotate(arr,l);
        cout<<arr<<endl;

    
    return 0;
}