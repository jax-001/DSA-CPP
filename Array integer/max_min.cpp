#include<iostream>
#include<limits.h>
using namespace std;

void find_max_min(int n, int arr[]){
    // int min = INT_MAX;
    // int max = INT_MIN;
    int maxi = INT_MIN;
    int mini = INT_MAX;

    // you can findout that using function min() and max()...
    for (int i = 0; i<n ; i++){
        // if(min > arr[i]){
        //     min = arr[i];
        // }
        mini = min(mini, arr[i]);

        // if(max < arr[i]){
        //     max = arr[i];
        // }
        maxi = max(maxi, arr[i]);
    }
    cout << "Maximum number is: " << maxi << endl;
    cout << "Minimum number is: " << mini << endl;
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
    cout << "Enter the array size: ";
    cin >> n;
    int arr[100];     //arr[n] is a worst practice....
    cout << "Take input for arr[]: " << endl;
    take_input(n,arr);
    find_max_min(n,arr);
    return 0;
}