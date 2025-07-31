// leet code:- 84
// https://leetcode.com/problems/largest-rectangle-in-histogram/



// method -1 (brute force method) (Expand the line from middle) Tc = O(n2)
/*
class Solution {
private: 
    void expand(vector<int>& heights, int &left, int &right){
        int n = heights.size();
        int i = left;
        while(left != 0 && heights[i] <= heights[left-1]){
            left--;
        }
        while(right != n-1 && heights[i] <= heights[right+1]){
            right++;
        }
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        if(n == 1) return heights[0];

        int maxArea = 0;
        for(int i = 0; i < n ; i++){
            int left = i, right = i;
            expand(heights, left, right);

            int Area = heights[i] * (right - left + 1);
            if(maxArea < Area) maxArea = Area;
        }

        return maxArea;
    }
};
*/


#include<bits/stdc++.h>
using namespace std;
class Solution {
private: 
    vector < int > nextSamllerElement(vector<int>& heights, int n){
        vector < int > ans(n);
        stack < int > s;
        s.push(-1);

        for(int i = n - 1 ; i >= 0; i--){
            while(s.top() != -1 && heights[s.top()] >= heights[i]){
                s.pop();
            }

            ans[i] = s.top();
            s.push(i);
        }

        return ans;
    }

    vector < int > prevSamllerElement(vector<int>& heights, int n){
        vector < int > ans(n);
        stack < int > s;
        s.push(-1);

        for(int i = 0 ; i < n ; i++){
            while(s.top() != -1 && heights[s.top()] >= heights[i]){
                s.pop();
            }

            ans[i] = s.top();
            s.push(i);
        }

        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        if(n == 1){
            return heights[0];
        }

        vector < int > left;
        left = prevSamllerElement(heights, n);

        vector < int > right;
        right = nextSamllerElement(heights, n);

        int area = INT_MIN;
        for(int i = 0; i < n ; i++){
            int l = heights[i];

            if(right[i] == -1) right[i] = n;   // cache...if all elements in the histogram are same then it will mark each element as -1 in the left and right vector.

            int b = right[i] - left[i] - 1;
            int a = l * b;
            if(area < a) area = a;
        }

        return area;
    }
};

