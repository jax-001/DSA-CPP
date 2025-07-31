// https://www.geeksforgeeks.org/problems/max-rectangle/1

// we are using  largest rectangle in histogram concept. basically what we does we calculate max area for each row by adding the upper rows that particular row and then use stack to find out the maxarea.
// Tc = O(row * col),     Sc = O(n)


#include<bits/stdc++.h>
using namespace std;

class Solution {
  private:
    vector < int > checkforleft(vector < int > &ans, vector < int > &left){
        stack < int > s;
        s.push(-1);
        int n = left.size();
        
        for(int i = 0; i < n ; i++){
            while(s.top() != -1 && ans[s.top()] >= ans[i]){
                s.pop();
            }
            
            left[i] = s.top();
            s.push(i);
        }
        
        return left;
    }
    vector < int > checkforright(vector < int > &ans, vector < int > &right){
        stack < int > s;
        s.push(-1);
        int n = right.size();
        
        for(int i = n-1; i >= 0 ; i--){
            while(s.top() != -1 && ans[s.top()] >= ans[i]){
                s.pop();
            }
            
            right[i] = s.top();
            s.push(i);
        }
        
        return right;
    }
    int findArea(vector < int > &ans){
        int size = ans.size();
        
        vector < int > left(size);
        left = checkforleft(ans, left);
        
        vector < int > right(size);
        right = checkforright(ans, right);
        
        int maxarea = 0;
        for(int i = 0; i < size ; i++){
            int height = ans[i];
            
            if(right[i] == -1) right[i] = size;
            
            int length = right[i] - left[i] - 1;
            int area = height * length;
            if(maxarea < area) maxarea = area;
        }
        
        return maxarea;
    }
    int checkMaxRectangle(int row, int col, vector<vector<int>> &mat){
        vector < int > ans(col);
        for(int i = 0 ; i < col ; i++){
            ans[i] = 0;
            if(mat[row][i] != 0){
                for(int j = row ; j >= 0; j--){
                    
                    if(mat[j][i] == 0) break;
                    
                    ans[i] += mat[j][i];
                }
            }
        }
        
        return findArea(ans);
    }
  public:
    int maxArea(vector<vector<int>> &mat) {
        int row = mat.size();
        int col = mat[0].size();
        
        int MaxArea = 0;
        for(int i = 0; i < row ; i++){
            int area = checkMaxRectangle(i, col, mat);
            if(MaxArea < area) MaxArea = area;
        }
        return MaxArea;
    }
};