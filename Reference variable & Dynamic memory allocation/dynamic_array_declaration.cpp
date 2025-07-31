#include<iostream>
using namespace std;

int getSum(int* arr, int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    
    // to allocate dynamic memory...means we are gonna use the heap memory...
    int* srr = new int[5];
    // total memory:- 4(static) + 20(dynamic)= 24 - allocated


    int n;
    cout << "Enter the size of the array: " ;
    cin >> n;

    // if we declare like : int arr[n]  , this is wrong approach...
    // we have to take advantage of heap memory...

    int* arr = new int[n];    // maing memory in heap memory...

    // taking input for the array...
    for(int i = 0; i<n; i++){
        cin >> arr[i] ;
    }

    int ans = getSum(arr,n);
    cout << "Sum of all elements is: " << ans << endl;

    return 0;
}
