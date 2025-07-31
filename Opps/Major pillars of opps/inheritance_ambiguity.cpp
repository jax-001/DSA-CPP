/*
    During inheritance, suppose you inherit properties from 2 or more parent classes having same
    function or property name, then you can distinguish them using "scope resolution opetator(::)"

    ex: 'A' and 'B' are parent classes(says)
        'C' is a child class that inherit from both 'A' an 'B' 
        suppose both parent class have one same function or property name i.e.: fun()

        you can distinguish both using '::'

        C.A :: fun();
        C.B :: fun();
*/
#include<iostream>
#include<string.h>
using namespace std;

class A{
    public:
    void fun(){
        cout << "In A" << endl;
    }
};

class B{
    public:
    void fun(){
        cout << "In B" << endl;
    }
};

class C : public A, public B{
    public:
    void end(){
        cout << "Thank you" << endl;
    }
};

int main(){
    C arr;
    arr.A :: fun();
    arr.B :: fun();
    arr.end();
    return 0;
}