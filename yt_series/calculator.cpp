#include <iostream>
using namespace std;
int main(){
    int N1 ;
    int N2;
    cout<< "N1:"<< endl;
    cin>> N1;
    cout<< "N2:"<< endl;
    cin >> N2;
    int sum = N1+ N2;
    int sub = N1 - N2;
    int mul = N1*N2;
    int div = N1/N2;
    int mod  = N1%N2; 
    char opration;// opration is a character variable which will store the opration to be performed

   



  cout << "enter the opration you want to perfrom "<< endl;
    cin >> opration;
    if ( opration == '+' )
    cout << " the sum of two number is" << sum << endl;
    else if (opration =='-')
    cout << "the substraction is "<< sub << endl;
    else if (opration == '*')
    cout << "the multiplication is "<< mul << endl;
    else if (opration == '/')
    cout << "the dividion is "<< div << endl;
  

 

    return 0;

}