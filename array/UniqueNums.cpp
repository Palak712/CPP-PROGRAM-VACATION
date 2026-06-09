#include <iostream>
using namespace std;
int main(){
    int arr[]={2,4,5,3,5,4,1,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(arr[i]=arr[j])
                count+=1;
        }
        if(count==1)
            cout<<arr[i]<<" ";
    }
    return 0;
}
