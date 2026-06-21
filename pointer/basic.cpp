#include <iostream>
using namespace std;
int main(){
    // float a=10.25;
    // float* ptr=&a;
    // float** ptr2=&ptr;
    // cout<<a<<" at "<<ptr<<endl;
    // cout<<*ptr<<endl;

    // // pointer to pointer
    // cout<<&ptr<<endl;
    // cout<<ptr2<<endl;

    // // dereferrencing operator (*) 
    // cout<<*(&a)<<endl;
    // cout<<*(ptr2)<<endl;
    // cout<<**(ptr2)<<endl;

    // null pointer (can't be deferrencing)
    int** p=NULL;
    cout<< p<<endl;
    return 0;
}