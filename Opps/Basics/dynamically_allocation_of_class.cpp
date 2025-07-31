#include<iostream>
using namespace std;
    
class Hero{
    private:        // now you can't access the health attribute through out the code, to use this we have to take use of functions...
    int health;
    char grade;


    public:                 // default is private, now you can access all the elements through out the code...
    int attack;


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
    // static allocation...
    Hero Ayan;
    Ayan.setHealth(100);
    Ayan.setGrade('A');
    Ayan.attack = 90;

    // Dynamically allocation...
    Hero *Sonu = new Hero;
    (*Sonu).setHealth(50);    // Sonu->setHealth(50)   is also right...
    (*Sonu).setGrade('C');
    Sonu->attack = 20;

    cout << "Health : " << Ayan.getHealth() << endl;
    cout << "Grade : " << Ayan.getGrade() << endl;
    cout << "Attack : "<< Ayan.attack <<endl;

    cout << endl << endl;

    cout << "Health : " << Sonu->getHealth() << endl;
    cout << "Grade : " <<Sonu->getGrade() << endl;
    cout << "Attack : "<< Sonu->attack <<endl;

    return 0;
}