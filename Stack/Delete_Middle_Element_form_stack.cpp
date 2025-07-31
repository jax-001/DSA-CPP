// https://www.naukri.com/code360/problems/delete-middle-element-from-stack_985246?leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&leftPanelTabValue=SUBMISSION

#include <bits/stdc++.h> 
using namespace std;

void solve(stack < int > &inputStack, int count , int size){
   if(count == size / 2){
      inputStack.pop();
      return ;
   }

   int num = inputStack.top();
   inputStack.pop();
   
   // recursion
   solve(inputStack, ++count, size);

   inputStack.push(num);
   return;

}
void deleteMiddle(stack<int>&inputStack, int N){
   int count = 0;
   solve(inputStack, count, N);
}