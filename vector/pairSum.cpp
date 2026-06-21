// O(n^2) brute force method
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> vect,int target){
    vector<int> ans;
    int n=vect.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(vect[i]+vect[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
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