#include<bits/stdc++.h>
using namespace std;    



// method 1
int findMin(int *arr, const int &ind, int &k){
    int minval = INT_MAX;
    int index = -1;
    for(int i = ind ; i > ind - k && i >= 0 ; i--){
        if(minval > arr[i]){
            minval = arr[i];
            index = i;
        }
    }
    return index;
}

int main(){
    int n = 5;
    int arr[n] = {1, 2, 6, 3, 4};
    
    int k = 2;
    int sum = arr[n-1];

    for(int i = n-1 ; i >= 0; ){
        int ind = findMin(arr, i-1, k);
        if(ind == -1) break;
        sum = sum + arr[ind] ;
        i = ind;
    }
    
    cout << "Minimum cost will be: "<< sum << endl;
    return 0;
}











/*

// method 2
int main(){
    int n = 5;
    int arr[n] = {1, 2, 6, 3, 4};
    
    int dp[n];
    dp[n-1] = arr[n-1];
    
    int k = 2;
    
    
    for(int i = n-2 ; i >= 0; i--){
        for(int j = 0; j <= k && i + j < n ; j++){
            dp[i] = min(dp[i], arr[i] + dp[i + j]);
        }
    }
    
    cout << "Minimum cost will be: "<< dp[0] << endl;
    
    return 0;
}

*/