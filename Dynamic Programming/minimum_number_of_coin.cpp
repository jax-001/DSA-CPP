#include<bits/stdc++.h>
using namespace std;

int solveRec(vector < int > &num, int x){
    // base cases...
    if(x == 0){
        return 0;
    }
    if(x < 0){
        return  INT_MAX;    
    }

    int mini = INT_MAX;
    for(int i = 0; i < num.size() ; i++){
        int ans = solveRec(num, x - num[i]);
        if(ans != INT_MAX){
            mini = min(mini, 1 + ans);
        }
    }

    return mini;
}

int main(){
    vector < int > num = {1, 2, 3};
    int x = 7;

    int ans = solveRec(num, x);
    if(ans == INT_MAX){
        return -1;
    }
    cout << "Minimun number of coins required is: " << ans << endl;
}