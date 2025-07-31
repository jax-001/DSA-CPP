
// FUNCTION OVERLOADING....
//   https://www.naukri.com/code360/guided-paths/oops-in-c/content/274159/offering/3757648

#include<iostream>
using namespace std;

class A {
    
    public:
    void sayHello(){
        cout << "Hello Biswajit." << endl;
    }

    /*
    void sayHello(){    // error
        cout << "Hello Biswajit." << endl;
    }
    */

    void sayHello(string name){
        cout << "Hello " << name << endl;
    }

/*
    int sayHello(string obj){     //error
        cout << "Hello " << obj << endl;
        return 1;
    }
*/
    int sayHello(char name){
        cout << "Hello Biswa" << endl;
    }

/*  FUNCTION OVERLOADING.....
    Here if you declare 2 or more function of same name of same type(like void, int or bool whatever) 
    then it will through some error. To achieve the funcional overhead you have to give some 
    input arguments of different types between each functions.

    It is independant on function type, but dependant on input arguments...
    case 1:
        void sayHello();
        void sayHello();
        here the compiler will through some error...
    
    case 2:
        void sayHello();
        void sayHello(string name);
        Here you achieve function overhead... it don't show any error...

    case 3:
        void sayHello();
        void sayHello(string name);
        int sayHello(string obj);       // the string name may be same or not...but it will show some error...
        This will also throgh some error because because it is independant on function type,
        here int and void are differen but the input arguments are same...

    case 4:
        void sayHello();
        void sayHello(string name);
        int sayHello(char name);
        Here also you achieve fuctional overhead...
*/
};

int main(){
    A Ayan;
    Ayan.sayHello();
    return 0;
}