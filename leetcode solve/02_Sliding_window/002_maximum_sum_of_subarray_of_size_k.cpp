#include<bits/stdc++.h>
using namespace std;

int findMaximumSum(vector<int> &nums, int k){
    int n = nums.size(); 
    int windowSum = 0, maxSum = 0;

    for(int i = 0; i < k ; i++){
        windowSum += nums[i];
    }

    maxSum = max(windowSum, maxSum);
    
    for(int i = k ; i < n ; i++){
        windowSum += (nums[i] - nums[i-k]);

        maxSum = max(windowSum, maxSum);
    }

    return maxSum;
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int k = 3;    // fixed window of size = 3.

    cout << "Maximum sum of subarray of size k is: " << findMaximumSum(nums, k) << endl;
    return 0;
}