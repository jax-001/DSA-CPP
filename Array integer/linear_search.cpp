#include<iostream>
using namespace std;
bool find_key(int n, int arr[] , int key){
    for(int i = 0 ; i<n; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}
int main(){
    int key;
    cout << "Enter the key element: ";
    cin >> key;
    int arr[10] = {1, 5, 2, 7, 12, 76, 32, 9, 0, 3};
    bool search = find_key(10, arr, key);
    if(search) cout << "Key is present" << endl;
    else cout << "Key is not present" << endl;
    return 0;
}