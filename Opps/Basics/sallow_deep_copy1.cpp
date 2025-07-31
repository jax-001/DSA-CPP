// deep copy....
#include<iostream>
#include<string.h>
using namespace std;

class hero {
public:
    int health;
    char grade;
    char  *name ;

    // Constructor
    hero() {
        name = new char[100]; // Allocate memory for name
    }

    // Copy Constructor for Deep Copy
    hero(const hero &obj) {
        health = obj.health;
        grade = obj.grade;
        name = new char[strlen(obj.name) + 1]; // Allocate memory
        strcpy(name, obj.name);               // Copy data
    }

    // Method to set name
    void setname(char name[]) {
        strcpy(this->name, name);
    }

    void print() {
        cout << "Name is: " << this->name << endl;
        cout << "Health : " << health << endl;
        cout << "Grade is: " << grade << endl;
    }

    // Destructor to avoid memory leak
    ~hero() {
        delete[] name;
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
    hero pati(Ayan) ;     // calls the deep copy constructor
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