// FROM THE GIVEN ARRAY WE HAVE TO CHECK WHOSE SUM WILL BE ZERO WE WILL RETURN THAT INDEX


/* # include <iostream>
# include <vector>
using namespace std;
int main(){
int arr[5]={1,2,4,5,7};
vector <int> pairSum;
int num = 5;
int sum = 12;
for(int i = 0; i<num;i++){
    for(int j = i+1;j<num;j++){
        if (arr[i]+arr[j]==sum){
            pairSum.push_back(i);
            pairSum.push_back(j);

        }
    }
}
for(int keys : pairSum){
    cout<<keys<<" ";
}


    return 0;
}*/
// THIS IS NOT THE MOST OPTIMIZED CODE AS THE TIME COMPLEXITY IS O(n,2)

// WE HAVE GIVEN THAT THE ARRAY IS THE SORTED ARRAY SO WE WILL USE TO OPTIMIZE THE CODE 


# include <iostream>
# include <vector>
using namespace std;
vector <int> pairSum(vector<int>nums,int target){
    vector<int> ans;
    int n = nums.size();
    int i =0;
    int j = n-1;
    while(i<j){
        int pairSum = nums[i]+nums[j];
        if (pairSum>target){
            j--;
        }
        else if (pairSum<target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            break;
        }


    }
    return ans;

}
int main(){
    vector<int> nums = {2,7,11,15};
    int target =26;
    vector <int> ans = pairSum(nums,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;

    return 0;
    
}

