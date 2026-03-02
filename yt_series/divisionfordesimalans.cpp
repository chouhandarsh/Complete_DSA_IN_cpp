#include<iostream>
using namespace std;
int main(){
    double a = 10;
    int b = 3;
    // division for decimal ans
    cout << "for the decimal answer result is"<< (a/b) << endl;
    // now we will use the type casting to get the decimal ans
    cout << " for the desical ans we will use type casting "<< a/(double)b<< endl;
    int ans = a/b; // this will give the integer ans
    cout << "the ans is "<< ans << endl;

    // or we can use the static_cast)" 
    return 0;
}
