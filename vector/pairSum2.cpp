#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> vect,int target){
    vector<int> ans;
    int n=vect.size();
    int i=0,j=n-1;

    while(i<j){
        int pairSum=vect[i]+vect[j];
        if(pairSum>target){
            j--;
        }
        else if(pairSum<target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main(){
    vector<int> vect={2,7,11,15};
    int target=9;

    vector<int> ans=pairSum(vect,target);
    cout<<ans[0]<<", "<<ans[1]<<endl;
    return 0;
}