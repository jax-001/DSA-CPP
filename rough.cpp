#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>
using namespace std;

/*   // this is for code line number: 130...
int check(int n){
    if(n==3) return 1;
    else return 0;
}
*/

int main(){

/*
    int a,b= 1;
    a =10;
    if( ++a) cout << b;
    else cout << ++b;

*/
/*
    int a = 1;
    int b = 2; 
    if(a-- > 0 || ++b > 2){   //in output b will be 2 because there is a or operator 
    // if 1st condition will be false then it will go to the next statement. but here the 1st statement is true.

        cout << "Stage1 - Inside If ";
    }
    else {
        cout << "Stage2 - Inside else ";
    }
    cout << a << " " << b << endl;


*/
/*
    int a = 1;
    int b = 2; 
    if(a-- > 0 && ++b > 2){ 
        cout << "Stage1 - Inside If ";
    }
    else {
        cout << "Stage2 - Inside else ";
    }
    cout << a << " " << b << endl;

*/

/*
    int number = 3;
    cout << (25 * ( ++number) );
*/

/*
    int a = 1; 
    int b = a++;
    int c = ++a;
    cout << b << endl;
    cout << c << endl;

*/

/*
    for(int i = 0; i <= 5; i++){
        cout << i << " ";
        i++;
    }
*/

/*
    for(int i = 0 ; i <= 5; i--){
        cout << i << " ";
        i++;
    }
*/
/*
    // i&1 returns 1(true) and 0(false)
    // if the lsb of the number is 0 then it returns 0 , else 1
    // overrally, if number is even then it returns 0, or if odd then 1
    for (int i = 0 ; i<=15 ; i+=2){
        cout << i << " ";
        if( i&1){    
            continue;
        }
        i++;
    }
*/

/*
    //print odd numbers 
    for(int i = 1; i<=10 ; i++){
        if( i&1 ){
            cout << i << " ";
        }
    }
*/

/*

    for(int i = 0 ; i<5; i++){
        for(int j = i ; j<=5; j++){
            cout << i << " " << j << endl;
        }
    }

*/

/*
    for(int i = 0 ; i<5 ; i++){
        for(int j = i ; j<=5; j++){
            if(i + j == 10){
                break;
            }
            cout << i << " " << j << endl; 
        }
    }

*/

/*
    // to check it will change its sign or not...
    int n = -6;
    int m = -n;
    cout << m << endl;
*/

/*
    // to check the ture and false statement of if statement...
    int n = 12;
    int b = n % 5;
    if(b) cout << "The value is correct" << endl;
    else cout << "The vlaue is not correct." << endl;
*/

/*
    int n = 3;
    if(check(n)){
        cout << "Okk" << endl;
    }
    else cout << "Noo" << endl;
*/

/*// to check the increment operator...
    int a = -1, b = 5;
    if(++a>0)
    b = 10;a++;
    printf("%d%d", a,b);
*/

/*
    // to print though loop
    int arr[5] = {3, 6, 2, 8, 9} ;
    for(int i:arr){    // you can't declare i as a global variable, you have to declare it here...
        cout << i << " " ;
    }
*/


/*
    int arr[] = {1,2,3,4,5};
    for(auto i : arr){
        cout << i << " " ;
    }cout << endl;
*/

/*
    vector < int > vec = {2,4,1,5,3};
    //vector < int > vec(5);
    auto mini = min_element(vec.begin() , vec.end());
    if(mini != vec.end())
    cout << "The minimum element is "<< *mini << endl;
    else 
    cout << "The vector is empty" << endl;
*/

/*
    unsigned int a = 3;
    a = a - 5;
    cout << a << endl;
*/ 


/*  // abs converts (-ve to +ve) int and (+ve to +ve) int ...
    int s = -1;
    int p = 1;
    cout << "s is --> " << abs(s) << endl;
    cout << "p is --> " << abs(p) << endl;
*/

/*
    char arr[5] = {'a', 'b', ' ', 'd', 'e'};
    string s = "ab de";
    cout << arr << endl;
    cout << s << endl;
*/

/*
    string s1 = "daabcbaabcbc";
    string s2 = "ddd";
    cout << "The s2 is found is at index no --> " << s1.find(s2) << endl;
*/
/*
    string s = "abbaca";
    int store = 1;
    int count = store + 1;
    s.erase(store,count);
    cout << s << endl;
*/


/*  // to delete row from a multidimentional array...
    vector < vector < int >> arr(3, vector < int > (3));
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cin >> arr[i][j];
        }
    }

    cout << "After pop_back:-> "<< endl;
    arr.erase(arr.begin());

    for(const auto& row : arr){
        for(int ele : row){
            cout << ele << " ";
        }
        cout << endl;
    }
*/


/*
    int x = -8;
    int s = x / 7;
    cout << s << endl;
*/

/*
    int i = 2;
    int* p = &i;
    cout << ++*p << endl;
    cout << ++(*p) << endl;
    *p = *p + 1;
    cout << *p << endl;
    p = p + 1;  //this will increase the address by one byte...
    cout << p << endl; // now this is pointing to aother location...
    cout << *p << endl;   // now this will show some garbage...
*/

/*
    // this is valid in python, without a if statement using of else statement...
    int count = 0;
    while(count < 5){
        cout << count << endl;
        count ++;
    }
    else{
        cout << "Not verified" << endl;
    }

*/


    return 0;
}


