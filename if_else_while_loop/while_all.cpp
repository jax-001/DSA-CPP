#include<iostream>
using namespace std;
int main(){

/*

    //sum of all numbers upto n...

    int n;
    int sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    int i = 1;
    while(i<=n){
        sum = sum + i;
        i++;
    }
    cout << "The sum of total n numbers are: "<< sum << endl;

*/

/*

    //sum of all even numbers...

    int n;
    int sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    int i = 2;
    while(i<=n){
        sum = sum + i;
        i+=2;
    }
    cout << "The sum of total n numbers are: "<< sum << endl;

*/

/**/

    //check wheather input is prime or not..
    
    int n;
    int sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    int i = 2;
    while(i<=n/2){
        if(n % i == 0){
            cout << "Entered number is composite." << endl;
            break;
        }
        i++;
    }
    if(i == (n/2)+1){
        cout << "Entered number is prime." << endl;
    }


    return 0;
}