#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout<<"Enter char array :";
    // at last we add delimiter which will stop taking the input when the user will input full
    cin.getline(str,100,'$');
    cout<< "output: "<<str<<endl;

    return 0;
}