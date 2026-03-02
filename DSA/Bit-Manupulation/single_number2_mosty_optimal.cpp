// we will use bucket approach in which we will have the buckets name 1,2,3 it will store the number according to the numver o9f times ir has appreead into the array
#include <iostream>
#include <vector>
using namespace std;
// ensure it is not in two's bucket then add it to the one's bucket
// add to two's bucket if it is already in one's bucket and remov eit from 1's bucker
// if already in the two's bucket them just remove it from the two's  bucket
int single_number(vector<int> & nums){
    // add num to two's if it already exist in one's
    int ones =  0;
    int twos = 0;
    for(int num:nums){
        // add the number to 2 if it already exist in 1
        twos = twos|(ones& num);
        // XOR WILL ADD NUM TO ONES IF NOT PRESENT,
        // REMOVE IT IF ALREADY PRESENT
        ones =ones^num;
        //remove the bit that appreared 3 times
        
    }

}

int main() {

    
    return 0;
}