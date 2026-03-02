#include <iostream>
using namespace std;
int main(){

    int oddsum=0;
    int n= 10;
    int i= 1;
    while (i<=10){
        if(i % 2 != 0){
            oddsum = oddsum + i;
        }
        i++;
    }
    cout << "Sum of odd numbers from 1 to " << n << " is: " << oddsum << endl;    



    return 0;
}