#include <iostream>
using namespace std;
int main(){
    int arr[6]={321,324,545,223,345,653};
    int smallest=INT_MAX;
    int largest=INT_MIN;
    int sIndex,lIndex;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
            sIndex=i;
        }
        if(arr[i]>largest){
            largest=arr[i];
            lIndex=i;
        }
    }
    cout<<"Smallest number is "<<smallest << " at index " << sIndex << endl;
    cout<<"Largest number is "<<largest<< " at index " << lIndex << endl;
    return 0;
}