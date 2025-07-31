#include<iostream>
using namespace std;
    
class Hero{
    private:        // now you can't access the health attribute through out the code, to use this we have to take use of functions...
    int health ;
    char grade;


    public:                 // default is private, now you can access all the elements through out the code...
    int attack;


    // Non-parameterised constuctor ...
    // when you write your own constructor the inbuilt constructor will vanish...
    /*  ATTENTION...****
        If you remove the non-parameterized constructor from your code ans only
        hold the parameterized constructor, what happens is if you further declares
        non-parameterized Hero (Hero Ayan2;) then it shows compiler error, because
        at the time of you create your own constructor the inbuilt constructor will die...
    */

    Hero(){
        cout << "Constructor called. " << endl;
    }

    //parameterised constructor...
    Hero(int health){
        cout << "second address: " << this << endl;
        this -> health = health;
        /*
            this is a pointer which stores the address of the main attribute: health(h1 says), if 
            we write like : health = health : then it will store the value of h1 in same h1, 
            but we need the value of the local value. In this case we have to use "this" 
            pointer...
        */
    }

    Hero(int health1, char grade1){
        health = health1;
        grade = grade1;
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

    void print(){
        cout << grade << endl;
        cout << health << endl;
    }
};

int main(){
    // static creation...
    cout << "Hello" << endl;
    Hero Ayan;
    cout << "World" << endl;
    
    Ayan.print();
/*
    Ayan.Hero()     // defalut constructor...
    when you create an object like: Ayan, by default a constructor is,
    and it has no return type and no input para meter...

    There is no function named Hero(), if you use this function
*/


    // it is same for dynamically allocation also...

    cout << endl << endl << endl;
    Hero Ayan2(10);   // when you put some value it call the parameterized constructor...
    cout << "Address: " << &Ayan2 << endl;
    cout << "Health is: " << Ayan2.getHealth() << endl;
    cout << "Grade is : " << Ayan2.getGrade() << endl;
    Ayan2.print(); 

    // for dynamically declare...
    cout << endl << endl << endl;
    Hero *sonu = new Hero(11);
    cout << "Address: " << sonu << endl;
    cout << "Health is: " << (*sonu).getHealth() << endl;
    cout << "Grade is : " << (*sonu).getGrade() << endl;
    sonu->print();


    // double varibale pass...
    cout << endl << endl << endl;
    Hero Alex(100, 'A');
    cout << "Alex Address: " << &Alex << endl;
    cout << "Alex Health is: " << Alex.getHealth() << endl;
    cout << "Alex Grade is : " << Alex.getGrade() << endl;
    sonu->print();

    return 0;
}