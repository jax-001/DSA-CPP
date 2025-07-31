#include<iostream>
using namespace std;
void sum_array(int n , int arr[]){
    int temp = 0;
    for(int i = 0 ; i<n; i++){
        temp = temp + arr[i];
    }
    cout << "Sum of all elements are: " << temp << endl;
    return ;
}
void take_input(int n, int arr[]){
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    return;
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[100];
    cout << "Take input for arr[]: ";
    take_input(n,arr);
    sum_array(n,arr);
    return 0;
}