#include <iostream>
using namespace std;
int main(){
    int arr[]={6,3,5,7,1,7};
    int size=6;
    int sum=0,prod=1;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        prod*=arr[i];
    }
    cout << "sum is "<<sum<<endl;
    cout << "product is "<<prod<<endl;
    return 0;
}