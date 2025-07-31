#include<iostream>
#include<string.h>
using namespace std;

class pokemon{
    int health;
    string name;
    char level;
    int attack;

    public:
    pokemon(int hel, string pok_name){
        health = hel;
        name = pok_name;
    }

    pokemon(string pokName, int hel, int lev, int att){
        name = pokName;
        health = hel;
        level = lev;
        attack = att;
    }

    void display(){
        cout << "Name is : " << name << endl;
        cout << "Health is: " << health << endl;
        cout << "Level is: " << level << endl;
        cout << "Attack is: " << attack << endl;
    }
};
int main(){
    pokemon Anubis(100, "Anubis");
    pokemon Charwizad("CharWizard", 100, 'A', 120);


    cout << "--------Anubis--------" << endl;
    Anubis.display();
    cout << endl << endl;
    cout << "--------Charwizad--------" << endl;
    Charwizad.display();

    return 0;
}