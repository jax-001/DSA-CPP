#include<iostream>
using namespace std;
    
class Hero{
    public:                 // default is private, now you can access all the elements through out the code...
    int health;
    char grade;
    int attack;
};

int main(){

    Hero Ayan;
    Ayan.health = 100 ;
    Ayan.grade = 'A';
    Ayan.attack = 90;

    cout << "Health: " << Ayan.health << endl;
    cout << "Grade: " << Ayan.grade << endl;
    cout << "Attack "<< Ayan.attack <<endl;

    return 0;
}