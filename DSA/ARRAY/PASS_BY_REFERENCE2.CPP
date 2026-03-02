# include<iostream>
using namespace std;
// we use pass by reference when we have to talk about the same memory location but we are calling it by differnt name this is called pass by reference
    // when we are taling abou tony stark or iron man we are talking about the same person both the time    
// this is called alias
void changeA(int &b){// this is not the memory location  we are talking that whenever this function will be called remember its value will be same as mentioned in the function

    int a  = 20;
    changeA(a);// means we have changed the value of to b and that is change at the memory location only
    cout<<"Inside main function"<<a<<endl;
}

int main(){
    int a = 10;
    changeA(a);
    


    return 0;
}