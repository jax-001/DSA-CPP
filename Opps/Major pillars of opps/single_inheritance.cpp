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
    In single inheritance one child is inherited the properties form the parent class...
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

};

int main(){
    Dog Pitbull;
    Pitbull.speak();
    cout << Pitbull.age << endl;

    return 0;
}