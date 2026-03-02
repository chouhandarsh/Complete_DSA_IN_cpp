#include <iostream>
#include <vector>
using namespace std;
int diagnol_sum(int mat[3][3],int n){
    int sum = 0;
    for(int i = 0;  i<n;i++){
        sum+=mat[i][i];
        if(i !=n-i-1){// we are using this condition so that the  central element is not added twice
            sum+=mat[i][n-i-1];
        }
    }
    return sum;
}

int main() {
    vector<vector<int>> mat={{1,2,3},{4,5,6,7,8},{7,8,9}};
    for(int i = 0;i<mat.size();i++){
        for(int j = 0;j<mat[i].size();j++){
            cout<<mat[i][j]<<" ";

        }
        cout<<endl;
    }

   
    
    return 0;
}