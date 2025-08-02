// https://leetcode.com/problems/longest-substring-without-repeating-characters/description/ 

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "abcabcbb";
    int n = s.length();

    unordered_set < char > myset;
    int maxLen = 1;
    int left = 0;

    for(int i = 0; i < n ; i++){
        if(myset.empty()) myset.insert(s[i]);
        else if(myset.find(s[i]) == myset.end()){
            myset.insert(s[i]);
            
            maxLen = max(maxLen, (int)myset.size());
        }
        else{
            myset.erase(s[left++]);
        }
    }

    cout <<"The longest substring without repetating characters is: " << maxLen << endl;
    return 0;
}