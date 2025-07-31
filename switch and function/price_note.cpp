#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the total price: ";
    cin >> n;
    int count = 0;
    int store = 0;
    switch(1){
        case 1:
            count = n / 100;
            if(count) cout << "100 rupees notes are: " << count << endl;
            store = n % 100;
        case 2: 
            count = store / 50 ;
            if(count) cout << "50 rupees notes are: " << count << endl;
            store = store % 50;
        case 3:
            count = store / 20;
            if(count) cout << "20 rupees notes are: " << count << endl;
            store = store % 20;
        case 4: 
            if(count) cout <<"1 rupee coins are: "<< store << endl;
            break;
    } 
    return 0;
}