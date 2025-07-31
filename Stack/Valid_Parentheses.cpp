// https://www.naukri.com/code360/problems/valid-parenthesis_795104?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&leftPanelTabValue=SUBMISSION

#include<bits/stdc++.h>
using namespace std;
// take the string value as you like...
bool isValidParenthesis(string s)
{
    if(s.length() == 1){
        return false;
    }
    
    stack < char > st;

    for(int i = 0; i < s.length() ; i++){
        if(s[i] == '(' ||
            s[i] == '{' || 
            s[i] == '['){
                
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                return false;
            }
            if( (s[i] == ')' && st.top() == '(') ||
                        (s[i] == '}' && st.top() == '{') || 
                        (s[i] == ']' && st.top() == '[')){
                st.pop();
            }
        }
    }
    if(st.empty()){
        return true;
    }
    else return false;
}