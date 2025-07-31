#include<bits/stdc++.h>
using namespace std;

class Stack{
    public: 
        int top;
        int *arr;
        int size;

    // behaviour...
    Stack(int size){
        this->size = size;
        this->top = -1;
        this->arr = new int[size];
    }

    // push operation...
    void Push(int element){
        if(top == size){
            cout << "Stack Overflow" << endl;
        }
        else{
            top = top + 1;
            arr[top] = element;
        }
        return;
    }

    // pop operation...
    void Pop(){
        if(top == -1){
            cout << "Stack Underflow" << endl;
        }
        else{
            cout << "The poped element is: " << arr[top] << endl;
            top = top - 1;
        }
        return ;
    }

    // top element...
    void Top(){
        cout << "Top element is: " << arr[top] << endl;
    }

    //empty or not..
    void Empty(){
        if(top == -1){
            cout << "Stack is empty." << endl;
        }
        else{
            cout << "Stack is not empty." << endl;
        }
        return;
    } 

    // display element
    void display_elem(){
        if(top == -1){
            cout << "The stack is empty."<< endl;
        }
        for(int i = 0; i <= top ; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

};

int main(){
    Stack st(5);
    
    st.Push(1);
    st.Push(2);
    st.Push(3);
    st.Push(4);
    st.Push(5);

    cout << "The elements in the stack are: " << endl;
    st.display_elem();

    st.Pop();
    st.Pop();

    cout << "After pop() elements in the stack is: " << endl;
    st.display_elem();

    st.Empty();
    st.Top();

    return 0;
}