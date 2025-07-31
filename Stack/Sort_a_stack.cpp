// https://www.naukri.com/code360/problems/sort-a-stack_985275?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&leftPanelTabValue=SUBMISSION


/*    faster than the below code.

#include <bits/stdc++.h>
using namespace std;
void sortStack(stack<int> &stack)
{
    if(stack.empty()){
        return;
    }

    int size = stack.size();
    int arr[size];
    
    int i = 0;
    while(!stack.empty()){
        arr[i++] = stack.top(); 
        stack.pop();
    }

    // sort the array
    sort(arr, arr+size);
    for(auto i : arr){
        stack.push(i);
    }
}
*/




#include <bits/stdc++.h>
using namespace std;

void sortInsert(stack<int> &stack, int num){
    if(stack.empty() || stack.top() < num){
        stack.push(num);
        return;
    }

    int n = stack.top();
    stack.pop();
    sortInsert(stack, num);
    stack.push(n);

    return;
}

void sortStack(stack<int> &stack)
{
    if(stack.empty()) return;

    int n = stack.top();
    stack.pop();
    sortStack(stack);

    sortInsert(stack, n);

    return;

}