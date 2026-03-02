# include <iostream>
using namespace std;
int main(){
    int arr[5]={1,3,4,5,6};
    cout<<arr<<endl; // this will print the location where the list will store the information
    cout<<&arr[3]<<endl;// adding this dollar sign will print the location
    return 0;
}