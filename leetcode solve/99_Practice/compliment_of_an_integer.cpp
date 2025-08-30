#include<iostream>
#include<math.h>
using namespace std;
//*** 
// run this code in external c++ compiler it is not working in vs code...
int main(){
    int n ;
    cout << "Enter a number: ";
    cin >> n;
    int i = 0, store = 0;
    while(n != 0){
        int bit = n & 1;
        store = store + bit * pow(10,i);
        i++;
        n = n>>1;
    }
    int temp = store;
    int num = 0;
    int k =0;
    while(temp != 0){
        int digit = temp % 10;
        if(digit == 0) digit = 1;
        else digit = 0;
        num = num + digit * pow (10,k);
        k++;
        temp = temp / 10;
    }
    int p = 0;
    int sqr = 0;
    while(num != 0){
        int win = num % 10;
        sqr = sqr + win * pow(2,p);
        p++;
        num = num / 10;
    }
    cout << "Total value of the compliment is: "<< sqr << endl;
    return 0;
}