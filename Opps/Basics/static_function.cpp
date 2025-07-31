#include<iostream>
#include<string.h>
using namespace std;

class hero{

    public:
    int health;
    char grade;
    char *name;
    static int setTimetoComplete ;

    /* VVIMP..
        you can access this static key word without declaring a object...

        In case of static function you don't have also to create an object
        They don't have "this" keyword
        they can only access static member...
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


    // static function...
    static int random(){
        //cout << this->health << endl;    // this will show wrong...
        //cout << health << endl;           // this will also show wrong...

        //cout << setTimetoComplete << endl;  // this is correct...
        return setTimetoComplete ;  // we can only access static members...
    }

};
    // syntax: data_type class_name :: variable_name = value;
    int hero::setTimetoComplete = 5;

int main(){

    
    //cout << hero::setTimetoComplete << endl;  // always use class to access and update a static data...


    //static function call...
    cout << hero::random() << endl;




    // hero ayan;
    // cout << ayan.setTimetoComplete << endl;

    return 0;
}