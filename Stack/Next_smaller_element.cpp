//  https://www.naukri.com/code360/problems/next-smaller-element_1112581?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&leftPanelTabValue=PROBLEM

/* Method - 1, Tc = O(n2)

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    vector < int > ans;
    for(int i = 0; i < n ; i++){
        int flag = 0;
        for(int j = i + 1 ; j < n ; j++){
            if(arr[i] > arr[j]){
                ans.push_back(arr[j]);
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            ans.push_back(-1);
        }
        if(i == n - 1){
            ans.push_back(-1);
        }
    }

    return ans;
}

*/


// method-2, Tc = O(n)
#include<bits/stdc++.h>
using namespace std;
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    vector < int > ans(n);
    stack < int > s;
    s.push(-1);

    for(int i = n - 1 ; i >= 0; i--){
        while(s.top() >= arr[i]){
            s.pop();
        }

        ans[i] = s.top();
        s.push(arr[i]);
    }
    
    return ans;
}