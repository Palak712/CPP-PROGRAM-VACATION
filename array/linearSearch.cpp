#include <iostream>
using namespace std;
int main(){
    int arr[]={24,64,44,25,66,67,27,76,46};
    int key=25;
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            cout<<"Element " << key << " found at index " << i << endl;
            return 0;
        }
    }
    cout<<"Element not found in the array." << endl;
    return 0;
}