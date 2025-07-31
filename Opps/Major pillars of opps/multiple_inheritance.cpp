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
    In case of multiple inheritance the child class inherit properties from 
    two or more parent class....
*/
#include<iostream>
#include<string.h>
using namespace std;

class Animal{   // parent class

    public:
        int age;
        int weight;

    public:
    void bark(){
        cout << " Bark " << endl;
    }
};

class Human{       // parent class
    public:
        string color;

    public:
    void speak(){
        cout << " Speak " << endl;
    }
};

class mammal{            // parent class
    public:
        int price;

    void milk(){
        cout << "Bat is an exception." << endl;
    }
};

// child class inheriting properties of both parents...(can inherit more than 2 parent classes...)
class Hybrid : public Human, public Animal{
    public:
    void confuse(){
        cout << "Bark of Speak ...???" << endl;
    }
};


class Complex : public Human, public Animal, public mammal{
    public:
        void check(){
            cout << "you can also combine more than 2" << endl;
        }
};


int main(){

    Hybrid Ayan;
    Ayan.age = 10;
    cout << "Age is: " <<  Ayan.age << endl;

    Ayan.color = "khaki" ;
    cout << "Color is: " << Ayan.color << endl;

    Ayan.confuse();


    Complex D;
    D.check();
    D.price = 10000;
    cout <<"price is: " <<  D.price << endl;


    return 0; 
}