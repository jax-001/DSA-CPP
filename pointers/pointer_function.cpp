#include<iostream>
using namespace std;


void update(int *p){
    *p = *p + 1;
    p = p + 1;
    return ;
}

int main(){
    int a = 5;
    int* p = &a;

    cout << "Before --> " << *p << endl;  
    cout << "Before --> " << p << endl;
    update(p);
    cout << "After --> " << p << endl;
    cout << "After --> " << *p << endl;

    // ATTENTION...
    // above by passing the value...you can cange the value to which the pointer is pointing...
    // but you can't change the address stored in p...


    // ATTENTION...
/*   this will display no result...you have to initiallize properly the null pointer...
    int* q = 0;    //  null pointer...
    *q = a;
    cout << *q << endl;
*/

// initiallize of null pointer...
    int* q = 0;  // null pointer...initiallization...
    q = &a;
    cout << "value of q is: " << *q << endl;
    return 0;
}