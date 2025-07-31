#include<iostream>
#include<stdbool.h>
using namespace std;

void intersection_array(int n, int arr[] , int m, int trr[]){
    cout << "Intersection of arr[] and trr[] is: " ;
    bool flag = true;
    for(int i = 0; i<n ; i++){
        for(int j = 0; j<m ; j++){
            if(arr[i] == trr[j]){
                cout << arr[i] << " ";
                flag = false;
                continue;
            }
        }
    }
    if(flag == true) cout << -1 << endl;
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

    // intersection of two array..
    intersection_array(n,arr,m,trr);
    return 0;
}