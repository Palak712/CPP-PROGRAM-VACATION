#include <iostream>
#include <vector>
using namespace std;
int binSearch(vector<int> &arr,int tar,int st,int end){
    if(st>end){
        return -1;
    }
    int mid=(st+end)/2;
    if(tar>arr[mid]){
        return binSearch(arr,tar,mid+1,end);
    }
    else if(tar<arr[mid]){
        return binSearch(arr,tar,st,mid-1);
    }
    else{
        return mid;
    }
}

int main(){
    vector<int> arr={-1,0,3,4,5,9,12};
    int tar=12;
    cout<< binSearch(arr,tar,0,arr.size()-1)<<endl;
    return 0;
}