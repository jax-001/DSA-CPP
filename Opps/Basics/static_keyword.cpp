#include<iostream>
#include<string.h>
using namespace std;

class hero{

    public:
    int health;
    char grade;
    char *name;
    static int setTimetoComplete ;

    /*
        you can access this static key word without declaring a object...
    */

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
    // syntax: data_type class_name :: variable_name = value;
    int hero::setTimetoComplete = 5;

int main(){

    cout << hero::setTimetoComplete << endl;  // always use class to access and update a static data...
    hero ayan;
    ayan.setTimetoComplete = 10;
    cout << ayan.setTimetoComplete << endl;

    hero sonu;
    sonu.setTimetoComplete = 20;
    cout << sonu.setTimetoComplete << endl;
    cout << ayan.setTimetoComplete << endl;

    return 0;
}