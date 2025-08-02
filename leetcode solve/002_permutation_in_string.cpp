// https://leetcode.com/problems/permutation-in-string/

#include<bits/stdc++.h>
using namespace std;

/*
    s1 = "ab", s2 = "eidbaooo";
    s1 = "ad", s2 = "eidbaooo";
*/
class Solution {
private: 
    bool checkPermutation(int *visit1, int *visit2){
        for(int i = 0; i < 26 ; i++){
            if(visit1[i] != visit2[i]){
                return false;
            }
        }
        return true;
    }

    void CheckChar(string &s, int *visit){
        for(auto i : s){
            visit[i - 'a']++;
        }
    }

public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length();
        int n2 = s2.length();
        string ans = "";

        if(n1 > n2) return false;

        int visit1[26] = {0};
        int visit2[26] = {0};
        CheckChar(s1, visit1);

        int right = 0;
        for(; right < n1 ; right++){
            ans += s2[right];
        }

        CheckChar(ans, visit2);
        if(checkPermutation(visit1, visit2)) return true;

        int left = 0;
        for( ; right < n2 ; right++){
            visit2[s2[left]-'a']--;
            visit2[s2[right]-'a']++;
            left++;
            
            if(checkPermutation(visit1, visit2)){
                return true;
            }
        }

        return false;
    }   
};