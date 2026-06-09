#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec={12,23,34};
    // vector<int> vec(5,2);

    // direct array printing
    // cout<<vec[0]<<endl;
    // cout<<vec[1]<<endl;
    // cout<<vec[2]<<endl;

    // for each loop
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;

    // size funtion
    cout<<vec.size()<<endl;

    // pushback function
    vec.push_back(3);

    // vector after pushback of 2
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;

    // popback function last element
    vec.pop_back();

    // vector after deleting last element
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;

    // returns 1st value of the vector
    cout<<vec.front()<<endl;

    // returns last valye of the vector
    cout<<vec.back()<<endl;

    // at particular index
    cout<<vec.at(2);
    return 0;
}