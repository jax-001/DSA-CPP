// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/submissions/1718469072/ 

#include <bits/stdc++.h>
using namespace std;

bool hasPairWithSum(vector<int>& arr, int k) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == k) return true;
        else if (sum < k) left++;
        else right--;
    }
    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 6};
    int k = 10;
    cout << (hasPairWithSum(arr, k) ? "Yes" : "No") << endl;
}