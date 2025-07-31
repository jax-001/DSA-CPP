#include<iostream>
using namespace std;

inline int getMax(int& a, int& b){  // always use reference variable as it won't create any extra space in stack memory...
    return ((a > b) ? a : b) ;
}
/*
    what:- 
    --> it is same as the macros (#define) 
    --> before compilation the getMax(a,b) is replaced with the function body i.e (a > b) ? a : b ;
    --> it increases code readbility and decrease memory uses...


    rule:- 
    --> if there is 1 line code inside the function: the compiler allows
    --> if there is 2-3 line then it depends on the compiler
    --> but more than 3 line not allowed...

*/




int main(){
    int a = 5 , b = 3;
    int ans = 0;

/* this code is right but it decrease code readability and
    if(a > b){
        ans = a;
    }
    else ans = b;
*/

    // except the above line of codes we can do the followings: 
    //ans = ( a > b ) ? a : b;
    ans = getMax(a,b);

    a = a + 2;
    b = b + 5;


    //ans = (a > b ) ? a : b;   // here we have to calculate the same piece of code again 
    // here we have can declare it in function...
    ans = getMax(a,b);



    cout << ans << endl;
    return 0;
}