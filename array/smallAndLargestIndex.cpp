#include <iostream>
using namespace std;
int main(){
    int arr[6]={321,324,545,223,345,653};
    int smallest=INT_MAX;
    int largest=INT_MIN;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        smallest=min(smallest,arr[i]);
        largest=max(largest,arr[i]);
    }
    cout<<"smallest number is "<<smallest<<endl;
    cout<<"largest number is "<<largest<<endl;
    return 0;
}