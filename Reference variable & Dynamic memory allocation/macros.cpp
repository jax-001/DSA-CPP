#include<iostream>
using namespace std;

// object-like macros
#define PI 3.14



// function-like macros
#define PRINT(x) (x * x)
#define CUBE(x) cout << "Cube is: " << (x * x * x) << endl << endl
#define MIN(a,b) ((a < b) ? a : b)



// multiline macros
#define PRINT_RECTANGLE(height, width)              \
    for(int i = 0; i < height ; i++){               \
        for(int j = 0; j < width ; j++){            \
            cout << "*";                            \
        }                                           \
        cout << endl;                               \
    }                                               \



// chain macros
#define CLERK 10
#define WORKER CLERK


int main(){

/*
    macros:-  #define 
    syntax:-> #define name value
    Ex:= #define gravity 9.8

    --> usually written in uppercase letters to identify properly
    --> using this "#define", we can exchange that value before compilation
    --> which is effective because it won't take any memory space and you can't change the value through out the code
    --> if you want to cange the value it will give error...
    --> PI ++;

*/

/*
    macros is of four types: 
    1. object-like macros
    2. function-like macros
    3. multiline macros
    4. chain macros

    the above code is a object-like macros

*/


    // 1. object-like macros
    int r = 5;
    double area = PI * r * r ;
    cout << "Area is : " << area << endl << endl;



    // 2. function-like macros
    // suppose you have to print the square of a given number...
    int a = 5 , b = 4;
    cout << "Spuare of a is: " << PRINT(a) << endl << endl;
    CUBE(a);
    cout << "Minimum value between 5 and 4 is: " << MIN(a,b) << endl;



    // 3. multiline macros...
    // in this you have to use '\' (backslash) after each line of code...
    // lets print a rectangle made of "*"
    PRINT_RECTANGLE(3, 4);



    // 4. chain macros...
    cout << WORKER ;





    // ATTENTION...
    // There are other predefined macros are there...
/*
    -->>   __LINE__
    -->>   __FILE__
    -->>   __DATE__
    -->>   __TIME__
    
*/

    cout << endl;
    // Display the current line number and the source file 
    // name 
    cout << "This is line " << __LINE__ << " in file " << __FILE__ << "\n"; 
  
    // Display the compilation date 
    cout << "Compiled on " << __DATE__ << endl;
    cout << "Time of compilation: " << __TIME__ ; 

    return 0;
}