// IT STATES THAT WHEN WE ADD SOME LARGE NEGATIVE NUMBER TO SOME SMALLELR NEGATIVE NUMBER THEN THE RESULT WILL DECREASE SO ISTEED OF 
// OF ADDINNG THAT LARGE NEGATIVE NUMBER IT IS BETTER TO ADD ZERO TO IT
// SO THAT LARGENEGATIVE VALUE IS RESET TO ZERO
# include <iostream>
using namespace std;
int main(){
    int arr[7]={3,-4,5,4,-1,7,-8};
    int currSum = 0;
    int n = 7;
    int maxSum = INT16_MIN;
    for (int i= 0;i<n;i++){
        currSum+=arr[i];
        maxSum = max(currSum,maxSum);
        if(currSum<0){
            currSum= 0;

        }
        
    }
cout<<maxSum<<endl;
cout<<sizeof(arr)<<endl;

    return 0;
}