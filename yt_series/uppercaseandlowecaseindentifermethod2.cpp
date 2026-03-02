#include <iostream>
using namespace std;
int main() {
char ch;
cout << "Enter a character: "<< endl;

cin>> ch;
if (ch >= 'A' && ch <= 'Z')
cout << "The character is uppercase." << endl;



else 
cout << "The character is lower case."<< endl;
    return 0;
}   