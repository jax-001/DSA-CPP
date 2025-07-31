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
    In single inheritance more than one childs are inherited the properties form the parent class...
    A        // here 'A' is parent class and the rest are child class...
    |
    B
    |
    C
    |
    D
*/
#include<iostream>
#include<string.h>
using namespace std;

class Animal{

    public:
        int age;
        int weight;

    public:
    void speak(){
        cout << "Can speak...??" << endl;
    }

};

class Dog : public Animal{
    public:
        string color;
        int attack;
};

class German_Shepher : public Dog{
    public:
        int height;
};

int main(){

    Dog Pitbull;
    Pitbull.speak();
    cout << Pitbull.age << endl;

    German_Shepher sonali;
    cout << "Attack is: " << sonali.attack << endl;
    cout << "Age is : " << sonali.age << endl;

    return 0;
}