#include <iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int arr[]={2,4,3,6,7,4};
    int sz=6;
    int i=0,j=sz-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(i=0;i<sz;i++){
        cout<<arr[i];
    }
    cout<<endl;
    return 0;
}