#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of bits: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int store = 0 ;
    int power = 0 ;
    for(int i = n-1 ; i >= 0; i--){
        store += arr[i] * pow (2, power);
        power ++;
    }
    cout << "The decimal number is : " << store << endl;
    return 0;
}