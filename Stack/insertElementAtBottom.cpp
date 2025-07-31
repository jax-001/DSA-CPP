// https://www.naukri.com/code360/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&leftPanelTabValue=SUBMISSION

#include <bits/stdc++.h> 
using namespace std;

void insertAtBottom(stack<int>& myStack, int x, int count, int size){
    if(count == size){
        myStack.push(x);
        return;
    }

    int num = myStack.top();
    myStack.pop();

    insertAtBottom(myStack, x, ++count, size);
    myStack.push(num);
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    int size = myStack.size();
    int count = 0;
    insertAtBottom(myStack, x, count, size);
    return myStack;
}