#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin>>nums[i];
    }
    int maxSum=INT_MIN,tempSum=0,start=0,end=0,s=0;
    for(int i=0;i<nums.size();i++){
        tempSum+=nums[i];
        if(maxSum<tempSum){
            maxSum=tempSum;
            start=s;
            end=i;
        }
        if(tempSum<0){
            tempSum=0;
            s=i+1;
        }
    }
    cout<<maxSum<<endl;
    for(int k=start;k<=end;k++){
        cout<<nums[k]<<" ";
    }
    cout<<endl;
    return 0;
}