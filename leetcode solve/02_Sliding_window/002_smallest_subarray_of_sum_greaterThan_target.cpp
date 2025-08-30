#include<bits/stdc++.h>
using namespace std;

int find_minLength(vector < int > &nums, int target){
    int n = nums.size();
    int minLen = INT_MAX;
    
    int sum = 0;
    int left = 0;
    for(int right = 0; right < n ; right++){
        sum += nums[right];

        while(sum >= target){
            minLen = min(minLen, right - left + 1);
            sum -= nums[left++];
        }
    }


    return ( (minLen == INT_MAX) ? 0 : minLen );
}
int main(){
    
    int target = 7 ;
    vector < int > nums = {2, 3, 1, 2, 4, 3};

    cout << "Minimum length of subarray of size >= target : " << find_minLength(nums, target) << endl;
    return 0;
}
