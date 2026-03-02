#include <iostream>
using namespace std;
int main () {
    int a = 10;
    int b = a++; // post increment paile kam phir update ismme pahile b me a update hoga phir jab hum a ki value ko print karene to a ki value 11 ho jayegi
    
    cout << b << endl;
    cout << a << endl;




    return 0;
}