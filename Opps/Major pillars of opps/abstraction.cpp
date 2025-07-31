// ABSTRACTION....
// https://www.naukri.com/code360/guided-paths/oops-in-c/content/274159/offering/3757645


/*
    it means showing only essential things to end user....

    Advantages: 
        1. Only you can make changes to your data or function, and no one else can.
        2. It makes the application secure by not allowing anyone else to see the background details.
        3. Increases the reusability of the code.
        4. Avoids duplication of your code.
*/
#include <iostream>
using namespace std;

class abstraction{
private:
    int a, b;

public:
    // method to set values of private members
    void set(int x, int y){
        a = x;
        b = y;
    }

    void display() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main() {
    abstraction obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}