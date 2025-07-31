// https://www.naukri.com/code360/problems/minimum-cost-to-make-string-valid_1115770?leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&leftPanelTabValue=SUBMISSION

#include <bits/stdc++.h> 
using namespace std;

int findMinimumCost(string str) {
  if(str.length() % 2 != 0) return -1;

  stack< char > s;

  for(int i = 0 ; i < str.length(); i++){
    char ch = str[i];

    if(!s.empty() && ch == '}' && s.top() == '{'){
      s.pop();
    }
    else s.push(ch);
  }

  int a = 0, b = 0;
  while(!s.empty()){
    char ch = s.top();
    if(ch == '}') a++;
    else b++;

    s.pop();
  }

  return ( (a+1)/2 + (b+1)/2 );
}