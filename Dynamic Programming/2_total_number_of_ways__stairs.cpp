#include<bits/stdc++.h>
using namespace std;

// memoisation method...
/*
int ways(int n, vector < int > &dp){
    if(n <= 2){
        return n;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    dp[n] = ways(n-1, dp) + ways(n-2, dp);
    return dp[n];
}

int main(){
    int n;
    cout << "Enter the number of stairs: " ;
    cin >> n;

    // initialise of the dp
    vector < int > dp(n+1);
    for(int i = 0; i <= n ; i++){
        dp[i] = -1;
    }

    cout << "Total number of ways: " << ways(n, dp) << endl;
    return 0;
}
*/




// tabulation...
/*
int main(){
    int n;
    cout << "Enter the number of stairs: " ;
    cin >> n;

    vector < int > dp(n+1);
    //dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    for(int i = 3 ; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << "Total number of ways: " << dp[n] << endl;
    return 0;
}
*/



// space optimisation...
int main(){
    int n;
    cout << "Enter the number of stairs: " ;
    cin >> n;

    int prev1 = 1;
    int prev2 = 2;

    for(int i = 3 ; i <= n ; i++){
        int curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }
    cout << "Total number of ways: " << prev2 << endl;
    return 0;
}