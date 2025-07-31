#include<iostream>
#include<stdbool.h>
using namespace std;

void intersection_array(int n, int arr[] , int m, int trr[]){
    cout << "Intersection b/n arr[] and trr[] is: ";
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m ; j++){
            if(arr[i] < trr[j]){
                break;
            }
            else{
                if(arr[i] == trr[j]){
                    cout << arr[i] << " ";
                }
            }
        }
    }
    return;
}

void arrange_array(int n , int arr[]){
    for(int i = 0 ; i<n-1; i++){
        for(int j = i ; j<n; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
    return ;
}

void take_input(int a, int srr[]){
    for(int i = 0 ; i<a; i++){
        cin >> srr[i];
    }
    return;
}

int main(){
    int n,m;
    cout << "Enter the size of the array arr[]: ";
    cin >> n ;
    cout << "Enter the size of the array trr[]: ";
    cin >> m ;
    int arr[100];
    int trr[100];

    cout << "Take input for arr[] : " << endl;
    take_input(n,arr);
    cout << "Take input for trr[]: " << endl;
    take_input(m,trr);
    // short the array ..
    arrange_array(n,arr);
    arrange_array(m,trr);

    // intersection...
    intersection_array(n,arr,m,trr);
    return 0;
}