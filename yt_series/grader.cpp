#include <iostream>
using namespace std;
int main () {
    int marks;
    cout << "Enter your marks:"<<endl;
    cin >> marks;
    if (marks >= 90) { cout << "Your grade is A"<< "\n" << "CONRATULATION  YOU ARE THE TOPPER OF THE CLASS "<< endl;}
    else if (marks >=80 && marks < 90) {cout << "your grade is B"<<endl;}
    else if (marks >70 && marks < 80) {cout << "your grade is C"<< endl;}
 else if (marks <60 ) {cout << "Sorry you are fail and you are not eligible foe the the next class go and study again"<< endl;}



return 0;

}
