// pass by reference using alias
#include <iostream>
using namespace std;
void changeX(int &b){
    b=20;
}
int main(){
    int a=10;
    changeX(a);
    cout<<"The value of a is now "<<a<<endl;
    return 0;
}