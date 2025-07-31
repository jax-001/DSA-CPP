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

/*
    Types of inheritance:-
        1. single
        2. multi-level
        3. multiple
        4. hybrid
        5. heirarchical
*/

#include<iostream>
#include<string.h>
using namespace std;

// parent class...
class Human{
    public:
        int age;

    protected:
        int height;

    private:
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
class Male : private Human{
    public:
        string color;
    
    void sleep(){
        cout << "Male sleep too much." << endl;
    }

    void setcolor(string ans){
        this->color += ans;
    }

    // here you can create a function to modify the properties of the parent class...
    void setage(int H){
        this->age = H;
    }

    void setHeight(int hei){
        this->height = hei;
    }

    int getheight(){
        //return height;
        return this->height   ;   //any one you want...this one is readble...
    }

    int getage(){
        return this->age;
    }

};

int main(){
    Male ram;

    //cout << ram.setweight() << endl;
    /*
        here the above line will show error because the setweight() points to the private a property
        in parent class, and you know you can't access the private properties any where even in the 
        child classes, with inherit mode any one public, protected and private. 
        you can only access the property in parent class only...

        in private mode of inheritance you can't direct access the functions which are declared in public modes also...
    */

   //ram.gethealth();    // reason is in above...

   ram.setage(23);
   ram.setHeight(200);
   ram.setcolor("White");

   cout << "color is: " << ram.color << endl;
   cout << "Age is: " << ram.getage() << endl;
   cout << "Height is: " << ram.getheight() << endl;
    
}