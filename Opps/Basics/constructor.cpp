#include<iostream>
using namespace std;
    
class Hero{
    private:        // now you can't access the health attribute through out the code, to use this we have to take use of functions...
    int health;
    char grade;


    public:                 // default is private, now you can access all the elements through out the code...
    int attack;


    // constuctor ...  must be public...
    // when you write your own constructor the inbuilt constructor will vanish...
    Hero(){
        cout << "Constructor called. " << endl;
    }


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
    // static creation...
    cout << "Hello" << endl;
    Hero Ayan;
    cout << "World" << endl;

/*
    Ayan.Hero()     // defalut constructor...
    when you create an object like: Ayan, by default a constructor is,
    and it has no return type and no input para meter...

    There is no function named Hero(), if you use this function
*/


    // it is same for dynamically allocation also...
    Hero *Sonu = new Hero;

    return 0;
}