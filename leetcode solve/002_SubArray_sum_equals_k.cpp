// https://leetcode.com/problems/subarray-sum-equals-k/description/ 

#include<bits/stdc++.h>
using namespace std;

int main(){
    // vector < int > vec = {1, 1, 1}; int k = 2;
    vector < int > vec = {30, 10, 20, 40, 50, 70, 60}; int k = 60;  

    unordered_map < int, int > umap;
    umap[0] = 1;        // to handle the cases where the subarray starts from 0 indices.
    int n = vec.size();
    int PreSum = 0;
    int count = 0;

    for(int i = 0; i < n ; i++){
        PreSum += vec[i];

        if(umap.find(PreSum - k) != umap.end()){
            count += umap[PreSum - k];
        }

        umap[PreSum]++;
    }

    cout << "Total sub-arrays are: " << count << endl;
}
