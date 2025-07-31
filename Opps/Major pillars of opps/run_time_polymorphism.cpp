// RUN TIME POLYMORPHISM...
// https://www.naukri.com/code360/guided-paths/oops-in-c/content/274159/offering/3757648


/*  // Run_time polymorphism...
    rule-1: function name should be same as the parent class...
    rule-2: input argument should be same also...
    rule-3: It should be inherited from the parent class...
*/

#include <iostream>
using namespace std;

class Living
{
public:
    void speaking()
    {
        cout << "Can speak: ??" << endl;
    }
};

class Animal : public Living
{
public:
    void speaking()
    {
        cout << "Can bark: ??" << endl;
    }


    // if you comment out the speaking function here, then it will call the parent speaking function...
};

int main()
{
    Animal Dog;
    Dog.speaking();
    return 0;
}