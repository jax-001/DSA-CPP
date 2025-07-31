// top - down approach 
// memoization method....
/*
#include<bits/stdc++.h>
using namespace std;

int fib(int n, vector < int >&dp){
    if(n <= 1){
        dp[n] = n;
        return n;
    }

    // step - 3
    if(dp[n] != -1){
        return dp[n];
    }

    // step - 2
    dp[n] = fib(n-1, dp) + fib(n-2,dp);
    return dp[n];
}

int main(){
    int n;
    cout << "Enter the term of fibonacci number: " ;
    cin >> n;

    // step - 1
    vector < int > dp(n+1);
    for(int i = 0; i <= n ; i++){
        dp[i] = -1;
    }

    cout << fib(n, dp) << endl;
    return 0;
}
*/





// Button - up approach
// Tabulation method
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the term of fibonacci number: " ;
    cin >> n;

    vector < int > dp(n+1);

    // base cases...
    dp[0] = 0;
    dp[1] = 1;

    // rest cases...
    for(int i = 2; i <= n ; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << "The nth fibonacci number is: " << dp[n] << endl;
    return 0;
}
*/






// space optimisation...
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the term of fibonacci number: " ;
    cin >> n;

    // base cases...
    int prev1 = 1;
    int prev2 = 0;

    // checker if n == 0
    if(n == 0){
        cout << "The nth fibonacci number is: " << prev2 << endl;
        return 0;
    }

    for(int i = 2; i <= n ; i++){
        int curr = prev1 + prev2;
        // shift logic...
        prev2 = prev1;
        prev1 = curr;
    }

    cout << "The nth fibonacci number is: " << prev1 << endl;
    return 0;
}




