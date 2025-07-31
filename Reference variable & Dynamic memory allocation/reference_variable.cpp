#include<iostream>
using namespace std;
/* ATTENTION...
// this is a bad practice as num is a local variable and ans is pointing to it...
// it can't able to return anything...the currect approach is update2()...
int& funct(int n){   
    int num = n;    // here if you use " static int num " instead of "int num" it can be possibel to some extent but not for every where...
    int& ans = num;
    ans++;
    return ans;
}
*/
void update1(int j){
    j++;
    return;
}

// by creating a reference variable you save memory which faster the code....
void update2(int& j){  // here you are not creating a new memory...you are working with that memory...
    j++;
    return;
}

int main(){

/*   // reference variable...
    int i = 5;
    // creating a reference variable...which pointing to the same memory address where i is stored...
    //   i -> [5] <- j
    int& j = i;

    cout << i << endl;
    i++ ; 
    cout << i << endl;
    j++ ;
    cout << i << endl;
*/

    int n = 5;
    cout << "update 1" << n << endl;
    update1(n);
    cout <<"After update 1 : " << n << endl;
    update2(n);   // creating a reference variable...
    cout << "After update 2 : " << n << endl;


    //cout << funct(n) << endl;
    //cout << n << endl;
    

    return 0;
}