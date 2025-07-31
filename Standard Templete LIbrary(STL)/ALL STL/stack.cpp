// stack is like plates placed in reception.. you can only have to the top one unless you remove the top plate...
// LIFO
#include<iostream>
#include<stack>   // library for stack...
using namespace std;
int main(){

    // in last last enter comes first.. like plates in marriage..
    // to declare ..
    stack < string > st;
    st.push("Sonu");  // here you don't have to write push_back() because you can't add values to the last. The incoming values always add to the top...
    st.push("Biswajit");
    st.push("Bikash");

    // here if you print the top element it will print bikash..
    cout << "The top element is --> " << st.top() << endl;

    // in stack you have no direct asses to the last elemtnt of the stack, unless you have to pop  the above all to asses that..
    st.pop();
    cout << "The top element is --> " << st.top() << endl;
    

    // you can also use empty function here...
    cout << "Empty or not: " << st.empty() << endl;
    return 0;
}