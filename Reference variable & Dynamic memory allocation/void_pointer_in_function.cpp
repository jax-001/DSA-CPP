#include<iostream>
using namespace std;

void printValue(void* ptr, char type){

    switch(type){
        case 'i':
            cout << "Interger value : " << *(static_cast < int* > (ptr)) << endl ;
            break;
        case 'f':
            cout << "Float value : " << *(static_cast < float* > (ptr)) << endl;
            break;
        case 'c':
            cout << "Character value : " << *(static_cast < char* > (ptr)) << endl;
            break;
        default: 
            cout << "No type allocated.";
    }
    return;
}

int main(){

    int intval = 5;
    float floatval = 2.54;
    char charval = 'a';

    printValue(&intval, 'i');
    printValue(&floatval, 'f');
    printValue(&charval, 'c');

    return 0;
}