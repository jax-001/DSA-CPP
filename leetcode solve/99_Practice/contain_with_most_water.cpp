
// https://leetcode.com/problems/container-with-most-water/description/  

#include<bits/stdc++.h>
using namespace std;

// height = [1,8,6,2,5,4,8,3,7]             // check with this example..

class Solution {            // direct copy from leetcode...
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() -1 ;
        int max_vol = -999999;

        if(height.size() == 2){
            return (min(height[left], height[right]));
        }

        while(left < right){
            long long int vol =  1LL * (right - left) * (min(height[left], height[right]));
            if(vol > max_vol){
                max_vol = vol;
            }
            if(height[left] <= height[right]){
                left++;
            }
            else{
                right--;
            }
        }

        return max_vol;
    }
};