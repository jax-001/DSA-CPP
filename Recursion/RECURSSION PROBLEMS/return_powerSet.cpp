//leetCode:- 78
// https://leetcode.com/problems/subsets/description/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printArray(vector < vector < int >> &ans){

    for(const auto& i : ans){
        for(auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }cout << endl;

    return;
}

void solve(vector < int > nums, vector < int > output, int index , vector < vector < int >> &ans){
    if(index >= nums.size()){
        ans.push_back(output);
        return;
    }

    // exclude...
    solve(nums, output, index+1, ans);
    
    // include...
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index+1, ans);

    return;
}

int main(){
    vector < int > nums = {1, 2, 3};
    vector < vector < int >> ans ;
    vector < int > output;
    int index = 0;
    solve(nums, output, index, ans);
    printArray(ans);
    return 0;
}