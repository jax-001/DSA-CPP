#include<iostream>
using namespace std;
int main(){

    
/*
    declaring int arr[n] is a bad practice...
    where n is a user input variable...the size of the array...

    we should declare it like :
    int arr[10000];  // any constant size...

    advantage: 
        Due to this the computer will allocate stack memory during the compilation time of the program...
        but in int arr[n] case it allocates memory during the running of the code...

        that's why if you take larger size grater than stack memory allocated the entire program will going to crash...


    Memory allocation: 
        1. stack (allocated according to the program size...)
            (static memory allocation)

            Ex: int i = 5;
                int arr[50];
                char ch;

        2. heap (comparatively larger in size...)
            (dynamic memory allocation)

            Ex: new char;
                new int;

            ** ATTENTION...
                1. To create a memory in heap memory you have to use the key word " new "
                2. Here you can't declare the variable name here...
                3. You have to declare like above example: new int: it will return an address
                4. you have to store the address the address in a pointer and have to play with pointers...
                    Ex: char* ch = new char;
                    
                    This means a new memory is created in heap memory and the address is stored in stack memory...
                    The total size allocated here is 5 byte(4 byte for pointer in 32 bit machine) = (1 - heap for character + 8 - stack for pointer)

*/


    char ch = 'a';
    cout << sizeof(ch) << endl;

    char* p = &ch;
    cout << sizeof(p) << endl;

    char* ptr = new char; 
    cout << sizeof(ptr) << endl;   // this will take totally 5 spaces in total...


/*
        DIFFERENCE: BETWEEN STACK AND HEAP
    
    STACK: 
        1. It is static. it can only allocate space according to the need and after work is
            done it erases the memory...

            while(true){ 
                int i = 5;
            }
            // this will allocate a memory of size 4 and named i , and erase it after each iteration...
            // but in case of heap memory...it continiously creates memory in heap memory untill the heap memory become full...

        2. if we write int a = 5; 
            it will allocate 4 byte in memory...

        3. here you don't have to delete the size , it deletes automatically...



    HEAP:
        1. The memory here is not deleted after the work is done...
        2. If we write int* a = new int;
            it will take 8 byte in total...
        3. You have to delete manually the allocated size...here

            ex: int* i = new int;
            
                // after use of i you have to clear the memory using delete key word...

                delete i;


*/

    return 0;
}
