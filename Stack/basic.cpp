#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    //creation...
    stack < int > s;
    
    // push operation...
    s.push(2);
    s.push(3);
    s.push(4);

    //pop...
    s.pop();

    // top element...
    cout << "Top element is: " << s.top() << endl;

    // empty or not...
    if(s.empty()){
        cout << "The stack is empty." << endl;
    }
    else{
        cout << "The stack is not empty." << endl;
    }

    // size of stack..
    cout << "Size of stack is: " << s.size() << endl;

    /*
    string str = "Biswa";
    cout << "size of string is: " << str.size() << endl;
    */
   
    return 0;
}