#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void take_input(vector < int > &stalls, int size){
    if(size <= 0){
        cout << "Can't insert value." << endl;
    }
    for(int i = 0; i<size ; i++){
        int data;
        cin >> data;
        stalls.push_back(data);
    }
    return;
}

bool isPossible(vector < int > &stalls, int cow, int mid){
    int cowCount = 1;
    int lastCow = stalls[0];

    for(int i = 0; i<stalls.size() ; i++){
        if(stalls[i] - lastCow >= mid){
            cowCount ++;
            if(cowCount == cow){
                return true;
            }
            lastCow = stalls[i];
        }
    }
    return false;
}

// using recrussion function...
int find_minimum(vector < int > &stalls, int cow, int start, int end, int ans){
    if(start > end){
        return ans;
    }
    int mid = start + (end - start) / 2;
    if(isPossible(stalls, cow, mid)){
        ans = mid;
        find_minimum(stalls, cow, mid+1, end, ans);
    }
    else{
        find_minimum(stalls, cow, start, mid-1, ans);
    }
}

int main(){
    int cow , n;
    cout << "Enter the number of cow and number of stalls : ";
    cin >> cow >> n;

    vector < int > stalls;
    cout << "Take input for the stalls: " << endl;
    take_input(stalls, n);

    // sorting the vector using sort()...
    sort(stalls.begin() , stalls.end());

    int start = 0;
    int end = stalls.back() - stalls.front();
    int ans = 0;

    int minMax = find_minimum(stalls, cow, start, end, ans);
    cout << "The maximum minimum distance between the cows is: "<< minMax << endl;

    return 0;
}