// https://leetcode.com/problems/maximum-average-subarray-i/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();

        double maxAvg = 0;
        double sum = 0;

        for(int i = 0; i < k ; i++){
            sum += nums[i];
        }

        maxAvg = sum / k;

        for(int i = k ; i < n ; i++){
            sum += (nums[i] - nums[i-k]);

            maxAvg = max(maxAvg, sum / k);
        }

        return maxAvg;
    }
};