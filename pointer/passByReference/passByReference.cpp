#include <iostream>
using namespace std;

// // pass by value
// void changeA(int a){
//     a=20;
// }
// int main(){
//     int a=10;
//     changeA(a);
//     cout<<"inside main fnx: "<<a<<endl;
//     return 0;
// }


// pass by reference using pointers
void changeA(int *ptr){
    *ptr=20;
}
int main(){
    int a=10;
    changeA(&a);
    cout<<"inside main fnx: "<<a<<endl;
    return 0;
}