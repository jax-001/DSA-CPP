// leet code: 46
// 	https://leetcode.com/problems/permutations/description/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printVector(vector < vector < int >> &ans){
    cout << endl << endl;
    for(const auto & i : ans){
        for(auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    return;
}

void take_input(vector < int > &nums){
    int n, data;
    cout << "Enter the size of the number: " ;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> data;
        nums.push_back(data);
    }
    return;
}

void solve(vector< int >&nums, int index, vector < vector < int >> &ans){
    if(index >= nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i = index ; i < nums.size() ; i++){
        swap(nums[index] , nums[i]);
        solve(nums, index+1, ans);
        swap(nums[index] , nums[i]);
    }
    return;
}

int main(){
    vector<int>nums ;
    take_input(nums);
    vector < vector < int >> ans;
    int index = 0;

    solve(nums, index, ans);

    printVector(ans);

    return 0;
}