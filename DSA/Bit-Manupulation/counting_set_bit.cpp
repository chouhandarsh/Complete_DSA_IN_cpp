#include <iostream>
using namespace std;
int count_set_bit(int n){
    int count =0;
    while(n>0){
        if(n%2==1){
            count++;

        }
        n = n/2;
    }
    if(n==1){
        count++;
    }
    return count;


}

int main() {
 

    return 0;
}