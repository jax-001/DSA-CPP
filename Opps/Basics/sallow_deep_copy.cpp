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

};

int main(){
    cout << endl << endl;
    hero Ayan;
    char name[40] = "Biswajit";
    Ayan.health = 100;
    Ayan.grade = 'A';
    Ayan.setname(name);

    cout << "----:Ayan:----" << endl;
    Ayan.print();

    cout << endl << endl << endl;

    cout << "----:Pati:----" << endl;
    hero pati(Ayan) ;           // here you copy ayan into pati(but this is sallow copy, if you change the name of Ayan, automatically name of pati will change..)
    pati.print() ;
    
    cout << endl << endl;
    

    // change the name...
    Ayan.name[0] = 'G';
    Ayan.print();
    cout << endl;
    pati.print();
    cout << endl << endl;

    return 0;
}