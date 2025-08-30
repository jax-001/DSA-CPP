#include<iostream>
#include<math.h>
#include<stdbool.h>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool flag = false;
    int i = 0;
    while(pow(2,i) <= n){
        if(n == pow(2,i)){
            flag = true;
            break;
        }
        i++;
    }
    if(flag == true) cout << "True" << endl;
    else cout << "flase" << endl;
    return 0;
}