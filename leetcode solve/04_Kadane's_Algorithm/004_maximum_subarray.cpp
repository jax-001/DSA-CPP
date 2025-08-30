// https://leetcode.com/problems/maximum-subarray/description/ 

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) return nums[0];

        int maxVal = nums[0];
        int maxUptoInd = nums[0];

        for(int i = 1; i < n ; i++){
            maxUptoInd = max(nums[i], maxUptoInd + nums[i]);
            maxVal = max(maxVal, maxUptoInd);
        }

        return maxVal;
    }
};