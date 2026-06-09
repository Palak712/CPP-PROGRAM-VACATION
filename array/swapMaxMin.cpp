#include <iostream>
using namespace std;
int main(){
    int arr[]={435,335,134,674,123,675,242,645,988};
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
    arr[sIndex]=largest;
    arr[lIndex]=smallest;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}