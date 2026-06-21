#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    // cout<<arr<<endl;
    cout<<*arr<<endl;

    // int a=15;
    // arr=&a; //expression must be a modifiable lvalue because arr pointers are constant
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(arr+3)<<endl;
    cout<<*(arr+4)<<endl;
    return 0;
}