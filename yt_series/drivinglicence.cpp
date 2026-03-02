#include <iostream>
using  namespace std;
int main (){
    int age;
    cout << "Enter the age"<< endl;
    cin >> age;
    if (age >= 18 && age <60)
        cout << "you are eligible for drving licence" << endl;
    else  
    cout << "you are not eligible for driving licence" << endl;



    return 0;
}