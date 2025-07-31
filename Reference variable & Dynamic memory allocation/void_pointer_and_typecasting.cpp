#include<iostream>
using namespace std;
int main(){
    /*
        In C++, a void pointer is a special type of pointer that can hold the address of any data type.
        It is declared as void*. Unlike regular pointers, a void pointer does not have an associated 
        data type, making it a generic pointer.
    */

        int a = 5;
        float f = 5.32;
        char ch = 'a';


        void* ptr; // void pointer..
        // point to different data types...
        ptr = &a ;
        cout << "Integer value: " << *(static_cast < int* > (ptr)) << endl;
        // to typecasting you have to use: syntax:->> static_case < data_type* > (name) 
        ptr = &f;
        cout << "Float value: " << *(static_cast< float* > (ptr)) << endl;

        ptr = &ch;
        cout << "character value: " << *(static_cast < char* > (ptr)) << endl;


    return 0;
}
