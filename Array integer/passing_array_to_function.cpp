#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    return ;
}
int main(){
    int arr[15] = {2, 3, 4, 5} ;
    int n = 15;
    printArray(arr,n);
    return 0;
}