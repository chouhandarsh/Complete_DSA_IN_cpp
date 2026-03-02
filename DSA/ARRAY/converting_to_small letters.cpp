#include <iostream>
using namespace std;
void small_letter(string a){
    int n = a.size();
    for(int i = 0; i<n;i++){
        if(a[i]>='A'&& a[i]<='Z'){
            a[i]=(a[i]+32);
        }





    }
    cout<<a<<endl;


}


int main() {
    small_letter("Darsh");
    
    return 0;
}