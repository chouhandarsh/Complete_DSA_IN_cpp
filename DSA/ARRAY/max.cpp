#include <iostream>
using namespace std;
int main(){
    int nums[]={5,10,3,4,6,7,8,-34};
    int size = 8;
    int smallest = nums[0];

    int i = 0;                // initialization

    while (i < size) {        // condition
        if (nums[i] >= smallest) {
            smallest = nums[i];
        }
        i++;                  // increment
    }

    cout << "greatest = " << smallest << endl;
    return 0;
}
