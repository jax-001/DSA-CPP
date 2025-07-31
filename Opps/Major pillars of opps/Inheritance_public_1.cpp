/*  // reference...
    https://www.naukri.com/code360/guided-paths/oops-in-c/content/274159/offering/3757646
*/
/*
    here child classes inherit the properties of parent class...
    syntax:- class chile_class_name : mode parent_class_name{child_properties};

    ex:- class Male : public Human{};
    ex:- class Male : private Human{};

    ** the properties you want to inherit, the modes are inherit automatically...you can modify the modes also...
    if in parent class a property is in private mode, if you inherit the public mode, then you can't access the private property in child class...
*/

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
        int weight;
    
    void gethealth(){
        cout << "Health in Humam." << endl;
    }
    void setweight(int w){
        this->weight = w;
    }
};

// child class...
class Male : public Human{
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

};

int main(){
    Male ram;
    
    ram.setage(20);
    cout << ram.age << endl;
    ram.setcolor("Black");
    cout << ram.color << endl;
    ram.gethealth();
    cout << ram.height << endl;
    cout << ram.weight << endl;
    ram.sleep();
    
}

