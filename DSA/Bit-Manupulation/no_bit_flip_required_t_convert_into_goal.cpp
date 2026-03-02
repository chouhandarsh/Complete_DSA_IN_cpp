// we have to find the num bers of flip that is required to flip the bit
// the thing which will be same willl not chnage and the number whosse value is diffrent they will be flipped and the value will change
#include <iostream>
// we will use xor gate because all are the values in the initial which is different from the target they are needed to be change they will give the output as one and then we will count the number of 1's in the result 
// the number ones we will have same will be the number of flips which is required
using namespace std;
int required_flip(int start, int goal){

    int ans= start^goal;
    int count=0;
    for(int i=0;i<32;i++){
        if(ans&(1<<i)){
            count++;
        }
    }
    return count;
      
}

int main() {
    int start =10;
    int target = 13;
    int a =required_flip(start,target);
    cout<<a<<endl;

    
    return 0;
}