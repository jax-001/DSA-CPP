/*  // reference...
    https://www.naukri.com/code360/guided-paths/basics-of-c/content/118817/offering/1382190

*/

/*  advantage of encapsulation...
    1. data hide and integrity using conditions in setter...
    2. if we want, we can make the class "read only"
    3. code reuseablity...
    4. best for unit testing...
*/


/*
    DIFFERENCE BETWEEN ABSTRACTION AND ENCAPSULATION...
    https://www.naukri.com/code360/guided-paths/oops-in-c/content/274159/offering/3757649?leftPanelTabValue=NOTE&customSource=studio_nav
*/

#include<iostream>
#include<string.h>
using namespace std;

class student{
    private:
        string name;
        int age;
        int roll;
    
    public:
    int getage(){
        return this->age;
    }
    void setage(int _age){
        age = _age;
    }
};

int main(){
    student ram;
    ram.setage(20);

    cout << ram.getage() << endl;
    cout << "sab sahi hai..." << endl;
    return 0;
}