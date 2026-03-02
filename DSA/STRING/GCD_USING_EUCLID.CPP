#include <iostream>
using namespace std;
int gcd_calculator(int n1,int n2){
    int a = max(n1,n2);
    int b = min(n1,n2);
    while(b!=0){// i was writing b ==0 and we never enterred into this loop so we were not getting the result 
        int r = a%b;
        a = b;
        b = r;



       

    }
     cout<<"HCF is "<<a<<endl;

    return a;
   

}
int lcm_calulator(int n1, int n2){
    int c = (n1*n2)/(gcd_calculator(n1,n2));
    cout<<"LCM is "<<c<<endl;

    }
int main() {
    gcd_calculator(16,3);
    lcm_calulator(2,7);

    
    return 0;
}