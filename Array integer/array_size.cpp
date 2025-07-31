#include<iostream>
using namespace std;
int main(){
    int arr[] = {2, 5, 3, 6, 8};
    int size = sizeof(arr) / sizeof(int);
    // intizer possess 4 byte, wrt to that total space/int = size of the array..
    cout << "Size of array: " << size << endl;
    return 0;
}