#include<iostream>
using namespace std;
// optimized code....
void find_duplicate(int n, int arr[]){
    int store = 0;
    for(int i  = 0; i<n; i++){
        store = store ^ arr[i];
    }
    cout << store << endl;
    return ;
}
void take_input(int n, int arr[]){
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    return ;
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[100];
    cout << "Take input for arr[]" << endl;
    take_input(n,arr);

    // find duplicate...
    find_duplicate(n,arr);
    return 0;
}