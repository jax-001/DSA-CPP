/*
    parent class    inherit mode    child class

    public          public          public
    public          private         private
    public          protected       protected

    protected       public          protected
    protected       protected       protected
    protected       private         private

    private         public          NA (not accessable)
    private         protected       NA
    private         private         NA


    VVIMP:- private data_member of any class can't be inherited....
    
*/
#include<iostream>
#include<string.h>
using namespace std;

// parent class...
class Human{
    public:
        int age;
        int height;

    protected:
        int weight;
    
    public:
    void gethealth(){
        cout << "Health in Humam." << endl;
    }
    void setweight(int w){
        this->weight = w;
    }
};

// child class...
class Male : protected Human{
    public:
        string color;
    
    void sleep(){
        cout << "Male sleep too much." << endl;
    }
    int getage(){
        return this->age;
    }
    int getweight(){
        return this->weight;
    }

};

int main(){
    Male ram;
    ram.color = "fair" ;

    cout << "color is: " << ram.color << endl;   // it is a attribute of child class not inherited...

    //cout << "Age is: " << ram.age << endl;    // you can't access, now it is protected...

    cout << "age is: " << ram.getage() << endl;
    cout << "weight is: " << ram.getweight() << endl;




    /*
        here all public and protected properties are inherites as protectes properties...
        If there is any private attribute is in parent class it can't be inherited...
        
        in protected, you can only access the properties in the class only, you can
        access these outside the class using getter and setter...
    */

   return 0;
}