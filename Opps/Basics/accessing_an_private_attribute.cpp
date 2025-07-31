#include<iostream>
using namespace std;
    
class Hero{
    private:        // now you can't access the health attribute through out the code, to use this we have to take use of functions...
    int health;
    char grade;


    public:                 // default is private, now you can access all the elements through out the code...
    int attack;


    /*
        protected: 
        you can assess:-
            1. inside the parent class
            2. inside the child class
            3. but you can't access directly outside the class...partially same as private...
    */


    // getter & setter( you can use any name you want...)
    int getHealth(){
        return health;
    }

    void setHealth(int h){  
        // you can basically create a password, who can change the health like if(password = "Aodf") health = h;  setHealth(int h, string password)
        health = h;
    }

    void setGrade(char ch){
        grade = ch;
    }

    char getGrade(){
        return grade;
    }
};

int main(){

    Hero Ayan;
    //Ayan.health = 100 ;
    //Ayan.grade = 'A';

    // to take input for health and grade we have to use function...
    Ayan.setHealth(100);
    Ayan.setGrade('A');
    Ayan.attack = 90;

    //cout << "Health: " << Ayan.health << endl;
    //cout << "Grade: " << Ayan.grade << endl;

    // to access health and grade we have to make functions...
    cout << "Health : " << Ayan.getHealth() << endl;
    cout << "Grade : " << Ayan.getGrade() << endl;
    cout << "Attack : "<< Ayan.attack <<endl;

    return 0;
}