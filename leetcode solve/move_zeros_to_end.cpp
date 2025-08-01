// https://leetcode.com/problems/move-zeroes/ 


// inorder moving
#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {5, 0, 2, 0, 3, 0};
    int n = nums.size();

    for(int left = 0, right = 0; right < n ; right++){
        if(nums[right] != 0){
            swap(nums[right], nums[left++]);
        }
    }

    for(auto i : nums){
        cout << i << " ";
    }
    return 0;
}