#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int *y= &n;
    cout<<y<<endl;// we will get the memory of were the number 10 is stored
    
    return 0;
}