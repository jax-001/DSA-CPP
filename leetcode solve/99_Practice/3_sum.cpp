// https://leetcode.com/problems/3sum/submissions/1719567150/  

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector < int > nums = {-2, -3, 0, -2, -5, -5, -4, 1, 2, -2, 2, 0, 2, -4, 5, 5, -10};   
    int size = nums.size();

    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());     // sort the vector

    for(int con = 0; con <= size -3; con++){
        if(nums[con] > 0) break;
        int remain = 0 - nums[con];

        if(con > 0 && nums[con] == nums[con-1]) continue;

        for(int i = con+1, j = size - 1; i < j ;){
            int total = nums[i] + nums[j];

            if(total == remain){
                ans.push_back({nums[con], nums[i], nums[j]});

                while(i < j && nums[i] == nums[i+1]) i++;
                while(i < j && nums[j] == nums[j-1]) j--;

                i++;
                j++;        // to move out of the same element.
            }
            else if(total > remain) j--;
            else i++;
        }
    }

    // print of the ans...
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < 3 ; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}