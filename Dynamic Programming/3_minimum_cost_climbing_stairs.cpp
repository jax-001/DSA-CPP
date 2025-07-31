#include <bits/stdc++.h>
using namespace std;

// leetcode question:- 746

/*
// memoisation....
int solve(vector<int> &cost, int n, vector<int> &dp){
    if (n == 0) return cost[0];
    if (n == 1) return cost[1];

    if (dp[n] != -1) return dp[n];

    dp[n] = cost[n] + min(solve(cost, n - 1, dp), solve(cost, n - 2, dp));
    return dp[n];
}

int main(){
    vector < int > cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    // vector < int > cost = {10, 15, 20};    // output = 15
    int n = cost.size();

    vector<int> dp(n + 1);
    for (int i = 0; i <= n; i++){
        dp[i] = -1;
    }

    int ans = (min(solve(cost, n - 1, dp), solve(cost, n - 2, dp)));
    cout << "The minimum cost of path is: " << ans << endl;
}
*/


// Tabulation...
/*
int main(){
    //vector < int > cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    vector < int > cost = {10, 15, 20};    // output = 15
    int n = cost.size();

    vector < int > dp(n+1);
    dp[0] = cost[0];
    dp[1] = cost[1];

    for(int i = 2; i < n ; i++){
        dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
    }

    int ans = min(dp[n-1], dp[n-2]);
    
    cout << "The minimum cost of path is: " << ans << endl;
}
*/


// space optimization 
// apply when the next solution depends on the previous 2 steps...
int main(){
    //vector < int > cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    vector < int > cost = {10, 15, 20};    // output = 15
    int n = cost.size();

   int prev1 = cost[0];
   int prev2 = cost[1];
   for(int i = 2; i < n; i++){
        int curr = cost[i] + min(prev1, prev2);
        prev1 = prev2;
        prev2 = curr;
    }
    cout << "The minimum cost of path is: " << min(prev1, prev2) << endl;
}