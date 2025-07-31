#include<iostream>
using namespace std;
int main(){
    int n = 2;
    switch(n){
        case 1: 
            cout << "First" << endl;
            break;
        case 2:
            cout << "Second" << endl;
            switch(n){
                case 2: 
                    cout << "You are a bad boy" << endl;
            }
            break;
        case 3: 
            cout << "Thirt" << endl;
            break;
        case 4: 
            cout << "Fourth" << endl;
            break;
    }
    return 0;
}