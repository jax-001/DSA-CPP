// https://www.naukri.com/code360/problems/reverse-stack-using-recursion_631875?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&leftPanelTabValue=SUBMISSION


#include<bits/stdc++.h>
using namespace std;

static int x = 0;
void reverse(stack<int> &stack, int size, int count, int arr[]){
    if(count == size){
        return;
    }

    arr[count] = stack.top();
    stack.pop();

    reverse(stack, size, count + 1, arr);
    stack.push(arr[x++]);
}

void reverseStack(stack<int> &stack) {
    int size = stack.size();
    int count = 0;
    int arr[size];
    reverse(stack, size, count, arr);
}