#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
// number of subset is 1<< that is 2^n
// this is very good approach like
// 0 0 0 -->  we will not take any of them in the subset
// 0 0 1 --> we will take only the first numbrer which means the one wich will have one that will be  taken and the placw where it is zero that will not be taken in the subset
using namespace std;
vector<vector<int>> total_subset(vector<int> arr){ 
    vector<vector<int>> ans;
    int n = arr.size();
    int subset = 1<<n;
    for(int i =0;i<subset;i++){// for counting the total number of subset
        vector<int> curr;
        for(int j=0;j<n;j++){// use for inclusion and exclusion
            // we will check if it is a set or not if it is so then it will be set then that index will bw included into the list
            
            if(i&(1<<j)){
                curr.push_back(arr[j]);
            }
        }
        ans.push_back(curr);
    }
    return ans;
    
}

int main() {
    vector<int> arr ={1,2,3,4};
    int n = arr.size();
    int m = 1<<n;
    vector<vector<int>> solution = total_subset(arr);
    for (int i=0;i<m;i++){
        for(int j=0;j<solution[i].size();j++){
            cout<<solution[i][j]<<" ";
        }
        cout<<endl;
        
    }
}