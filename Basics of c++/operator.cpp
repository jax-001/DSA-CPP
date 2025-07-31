#include<iostream>
using namespace std;
int main(){
    int a = 2/5;
    float r = 2/5;
    
    // but if you do like this:
    float t = 2.0 / 5;

    double u = 2/5;
    double i = 2.0/5;

    //or you can do like this...
    float b = 2;
    float c = 5;
    float d = b/c;

    cout << a << endl;    //this will give value in integer
    cout << r << endl;   // this will also give value in integer..
    cout << d << endl;   // but this will give in float..
    cout << t << endl;
    cout << u << endl;
    cout << i << endl;

    return 0;
}