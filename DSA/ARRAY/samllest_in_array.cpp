# include <iostream>
using namespace std;
int main(){
    int arr[5] = { };
    int i = 0;
    while (i<5){
   cout << "Enter the numbers "<< endl;
   cin>> arr[i];
   i++;
    }
   cout<<" "<<endl;
   int smallest = arr[0];
   int largest = arr[0];
   for(int i = 0; i < 5;i++){
    if (arr[i]<=smallest)
    smallest = arr[i];
   }
   for (int i = 0; i<5;i++){
    if (arr[i]>=largest) // semicolon should not be here as if we would add semicolon then the loop will be terminated here only and we would not be able to wxicute the furthercondition
    largest = arr[i];

   }
cout<<"The smallest number is"<< smallest<<endl;
cout<<"The largest number is "<<largest<<endl;
for (int j = 0; j<5;j++){
    if (smallest == arr[j])
    cout<<"The smallest number is at "<<j<<endl;
   
    }
for (int j = 0; j<5;j++){
    if (largest == arr[j])
    cout<<"The largest number is at "<<j<<endl;
    
    }

    return 0;
}