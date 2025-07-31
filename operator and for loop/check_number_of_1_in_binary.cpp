#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter the number: ";
    cin >> n;
    // convert to binary...
    int arr[32];
    int count = 0 ; 
    for(int i = 0 ; n > 0 ; i++){
        arr[i] = n % 2; 
        n = n / 2; 
        count ++;
    }
    int num = 0;
    for(int j = 0 ; j < count; j++){
        if(arr[j] == 1) num++;
    }

    cout << "Total number of 1 in the binary value is: "<< num << endl;

    return 0;
}