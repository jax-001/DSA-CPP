#include<iostream>
#include "Hero.cpp"       // by using this you can access an outer class file...
using namespace std;
int main(){
    Hero Ayan;
    cout << "Size : " << sizeof(Ayan) << endl;
    return 0;
}