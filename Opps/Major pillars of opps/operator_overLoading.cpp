// OPERATOR OVERHEAD...

// https://www.naukri.com/code360/guided-paths/oops-in-c/content/274159/offering/3757648

#include<iostream>
using namespace std;

class B{

    public:
        int a;
        int b;


    // operator overhead...
    // syntax:- void operator-any(input argument){};
    void operator+ (B &obj){
        int val1 = this -> a;
        int val2 = obj.a;
        cout << "Output is(+): " << val2 - val1 << endl;
    }


    void operator- (B &obj){
        int val1 = this -> a;
        int val2 = obj.a;
        cout << "Output is(-): " << val2 + val1 << endl;
    }


    void operator* (B &obj){
        cout << "Hey Biswajit !!, how are you...." << endl;
    }


    void operator() (){
        cout << "I am the parenthesis ," << this -> a << endl;
    }

};

int main(){
    B obj1, obj2 ;
    obj1.a = 4;
    obj2.a = 7;

    // addition --> substraction...
    obj1 + obj2;    // here the 2nd operand will pass to the function as input argument...i.e. obj2 and the 1st operand is fetched from the current class...

    // sub --> add
    obj1 - obj2;


    // only printing the statement...
    obj1 * obj2;

    obj1();
}