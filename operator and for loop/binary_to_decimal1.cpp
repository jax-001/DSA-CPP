#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n ;
    cout <<  "Enter the number in binary format: ";
    cin >> n;
    int store = 0;
    int i = 0;
    int total = n;
    while(total != 0){
        int digit = total % 10;
        store = store + digit * pow(2,i);
        total = total / 10;
        i++;
    }
    cout << "The decimal number is: " << store << endl;
    return 0;
}