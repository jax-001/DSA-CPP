#include<iostream>
using namespace std;

/*If the class is empty then it will print the size of the class = 1
    except double all are taking 4 bit.*/
    
class Hero{
    // int health;
    // char ch;
    // int attach;
    // float avg;
    //double run;
};

int main(){
    Hero h1;
    cout << "Size : "<< sizeof(h1) << endl;
    return 0;
}