#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;    // takes input...
    if(n>0){
        cout << n << " is positive number."<< endl;
    }
    else{
        cout << n << " is not positive number." << endl; 
    }

    int a,b;
    cout << "Enter the value of a: ";
    cin >> a ;
    cout << "Enter the value of b: ";
    cin >> b;
    if(a>b) cout << a << " is greater than "<< b << endl;
    else cout << b << " is greater than " << a << endl;
   
    return 0;
}