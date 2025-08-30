// https://leetcode.com/problems/range-sum-query-2d-immutable/ 


#include<bits/stdc++.h>
using namespace std;

class NumMatrix {
private:
    vector < vector < int >> prefix;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        prefix.assign(matrix.size(), vector<int>(matrix[0].size(), 0));

        if(matrix.size() != 0 && matrix[0].size() != 0){
            //prefix[0][0] = matrix[0][0];
            for(int i = 0; i < matrix.size(); i++){
                for(int j = 0; j < matrix[0].size(); j++){
                    if(i == 0 && j == 0){
                        prefix[i][j] = matrix[i][j];
                    }
                    else if(i > 0 && j > 0){
                        prefix[i][j] = matrix[i][j] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
                    }
                    else if (i == 0){
                        prefix[i][j] = matrix[i][j] + prefix[i][j-1];
                    }
                    else{
                        prefix[i][j] = matrix[i][j] + prefix[i-1][j];
                    }
                }
            }
        }  
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        if(prefix.size() == 1 && prefix[0].size() == 1){
            return prefix[0][0];
        }

        if(row1 != 0 && col1 != 0){
            sum = prefix[row2][col2] - prefix[row1-1][col2] - prefix[row2][col1-1] + prefix[row1-1][col1-1];
        }
        else if(row1 == 0 && col1 == 0) sum = prefix[row2][col2];
        else if(row1 != 0){
            sum = prefix[row2][col2] - prefix[row1-1][col2];
        }
        else{
            sum = prefix[row2][col2] - prefix[row2][col1-1];
        }

        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */