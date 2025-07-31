// sallow copy....
#include<iostream>
#include<string.h>
using namespace std;

class hero{

    public:
    int health;
    char grade;
    char *name;

    char getname(){
        cout << "Name is: " << this -> name << endl;
    }

    char setname(char name[]){
        this -> name = name;
    }

    void print(){
        cout << "Name is: " << this -> name << endl;
        cout << "Health : " << health << endl;
        cout << "Grade is: " << grade << endl;
    }


    //destroctor....
    ~hero(){
        cout << "Destroctor called." << endl;
    }

};

int main(){
    cout << endl << endl;
    hero Ayan;
    
    hero *sonu = new hero();

/*
    for stastic allocation destroctor calls automatically ,but for dynamic allocation
    you have to delete manually.
*/

    delete sonu;     // delete constructor...

    return 0;
}