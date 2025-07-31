#include<iostream>
using namespace std;
int main(){
    int n = 2;
    while(1){
        switch(n){ 
        case 1: 
            cout << "first" << endl;
            break;    // this break will terminate the switch loop.. but it has no effect on while loop...
        case 2: 
            cout << "second" << endl;
            //continue;    // in switch case, continue is not valid...
            exit(2);   // this will terminate the loop...
            break;
        case 3: 
            cout << "Third" << endl;
            break;
        case 4: 
            cout << "fourth" << endl;
            break;
    }
    }
    return 0;
}