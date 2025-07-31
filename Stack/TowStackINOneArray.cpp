// https://www.naukri.com/code360/problems/two-stacks_983634?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_CodestudioLovebabbar5thfeb&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
class TwoStack {

public:

    int top1;
    int top2;
    int *arr;
    int size;

    // Initialize TwoStack.
    TwoStack(int s) {
        size = s;
        arr = new int[size];
        top1 = -1;
        top2 = s;
    }
    
    // Push in stack 1.
    void push1(int num) {
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = num;
        }
    }

    // Push in stack 2.
    void push2(int num) {
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = num;
        }
        
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        int item;
        if(top1 != -1){
            item = arr[top1];
            top1--;
        }
        else{
            item = -1;
        }
        return item;
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if(top2 != size){
            return (arr[top2++]);
        }
        else{
            return -1;
        }
    }
};
