# include <iostream>
using namespace std;
int linear_search(int arr[],int sz,int target){
for(int i =0;i<sz;i++){
    if (arr[i]==target){
        return i;
    }

}
return -1;
   

}
int main(){
     int arr[]={22,334,53,5,44,34,5};

    int sz = 7;
    int target = 2;
    cout<<linear_search(arr,sz,target)<<endl;






    return 0 ;
}