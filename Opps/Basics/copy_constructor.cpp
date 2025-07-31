#include<iostream>
using namespace std;
    
class Hero{
    private:        // now you can't access the health attribute through out the code, to use this we have to take use of functions...
    int health ;
    char grade;


    public:                 // default is private, now you can access all the elements through out the code...
    int attack;

    Hero(){
        cout << "Constructor called. " << endl;
    }

    //parameterised constructor...
    Hero(int health){
        this -> health = health;
    }

    Hero(int health1, char grade1){
        health = health1;
        grade = grade1;
    }


    // copy constructor...also inbuilt, but you can make it by your own...
    Hero(Hero &temp){    // use & here, neither you will fall into infinite loop of copy creation...
        this->health = temp.health;
        this->grade = temp.grade;
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

    Hero Ayan(100, 'A');
    Ayan.print();
    
    cout << endl << endl;

    // copy constructor...
    Hero Sonu(Ayan);    // here calls the defalult constructor...it is inbuilt...
    //Hero Sonu = Ayan;
    Sonu.print();

    return 0;
}