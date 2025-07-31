/*  reference...
    https://www.naukri.com/code360/guided-paths/oops-in-c/content/274159/offering/3757647
*/
/*
    Types of inheritance:-
        1. single
        2. multi-level
        3. multiple
        4. hybrid
        5. heirarchical
*/

/*
    here a single parent can be parent for  many child classes....
    for example family tree...
*/
#include<iostream>
#include<string.h>
using namespace std;

class A{
    public:
    void fun1(){
        cout << "Inside A" << endl;
    }
};

class B : public A{
    public:
    void fun2(){
        cout << "Inside B" << endl;
    }
};

class C : public A{
    public:
    void fun3(){
        cout << "Inside C" << endl;
    }
};

int main(){
    A a1;
    a1.fun1();

    cout << endl;

    B b2;
    b2.fun1();
    b2.fun2();

    cout << endl;

    C c3;
    c3.fun1();
    c3.fun3();

    cout << endl;

    return 0;
}