/*
    INPUT:- 412
    OUTPUT:- four one two
*/

#include<iostream>
#include<string>
using namespace std;

void printNumber(string *arr, int n){
    if(n == 0) return;
    int a = n % 10;
    n = n / 10;
    printNumber(arr, n);
    cout << arr[a] << " ";
    return;
}

int main(){
    int n;
    cout << "Enter a number which you want to print: " ;
    cin >> n;

    string arr[10] = {"Zero", "One", "Two", "Three", "Four", 
                        "Five", "Six", "Seven", "Eight", "Nine"};

    printNumber(arr, n);
    return 0;
}