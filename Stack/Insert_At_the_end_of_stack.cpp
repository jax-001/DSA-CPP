// https://www.naukri.com/code360/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&leftPanelTabValue=SUBMISSION

#include <bits/stdc++.h> 
using namespace std;

void solve(stack < int > &myStack, int elem){
    if(myStack.empty()){
        myStack.push(elem);
        return;
    }

    int num = myStack.top();
    myStack.pop();

    solve(myStack, elem);

    myStack.push(num);
    return;
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack, x);
    return myStack;
}
