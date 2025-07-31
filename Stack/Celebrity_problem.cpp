//   https://www.geeksforgeeks.org/problems/the-celebrity-problem/1

// Brute force approach. O(n2) 
/*
    class Solution {
  private:
    bool checkPerson(vector<vector<int> >& mat, int &ans, int &n){
        for(int i = 0; i < n ; i++){
            if(ans == i) continue;
            
            if(mat[i][ans] == 0) return false;
        }
        
        return true;
    }
  public:
    int celebrity(vector<vector<int> >& mat) {
        int n = mat[0].size();
        int ans = INT_MIN;
        for(int i = 0; i < n ; i++){
            int flag = 0;
            for(int j = 0; j < n ; j++){
                if(i == j) continue;
                
                if(mat[i][j] == 1){
                    flag = 1;
                }
            }
            if(flag == 0) {
                ans = i;
                
                if(checkPerson(mat, ans, n)){
                    break;
                }
                else{
                    ans = INT_MIN;
                }
            }
        }
        
        if(ans == INT_MIN){
            ans = -1;
        }
        return ans;
    }
};
*/

// using stack. O(n)

#include<bits/stdc++.h>
using namespace std;

class Solution {
  private:
    void checkForKnown(int A, int B, stack < int >& s, vector<vector<int> >& mat){
        if(mat[A][B] == 1){
            s.push(B);
        }
        else s.push(A);
    }
    
    bool CheckForValidity(int ans, vector<vector<int>>& mat, int& n) {
    for(int i = 0; i < n; i++) {
        if(i == ans) continue;
        
        if(mat[ans][i] == 1 || mat[i][ans] == 0) return false;
    }
    return true;
}

  public:
    int celebrity(vector<vector<int> >& mat) {
        int n = mat[0].size();
        
        stack < int > s;
        for(int i = 0; i < n ; i++){
            s.push(i);
        }
        
        while(s.size() > 1){
            int A = s.top();
            s.pop();
            int B = s.top();
            s.pop();
            
            // check between two. who knows whom.
            checkForKnown(A, B, s, mat);
        }
        
        if(s.empty()){
            return -1;
        }

        // single element in stack is the potential candidate. verify it. 
        if(CheckForValidity(s.top(), mat, n)){
            return s.top();
        }
        return -1;
    }
};