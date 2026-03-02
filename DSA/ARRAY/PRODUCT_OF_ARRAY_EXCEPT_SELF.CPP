// in this we will calculate the product using loop, this method id correct but as we are using two for loops so we will get a error of time complexity
/* # include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;   
        for(int i = 0; i < n; i++) {
            int pro = 1;
            for(int j = 0; j < n; j++) {
                if(i != j) {
                    pro = pro * nums[j];
                }
            }
            ans.push_back(pro); 
        }

        return ans;
    }
};
int main() {
   
    Solution obj;

    // ✅ Step 2: Create an input vector
    vector<int> nums = {2, 4, 5, 6};

    // ✅ Step 3: Call the function and store result
    vector<int> result = obj.productExceptSelf(nums);

    // ✅ Step 4: Print the result
    for(int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}*/


// NOW WE WILL USE AN ALOGORITHM IN WHICH WE WILL MULTIPLY ALL THE NUMBER BEFORE IT AND AFTER IT AND THE FINAL PRODUCT WILL BE THE PRODUCT OF THE NUMBER BEFORE AND AFTER AND WE WILL REQUIRE ONLY ONE LOOP SO THE TIME COMPLEXITY WILL BE O(N) INSTEED OF O(N2)

