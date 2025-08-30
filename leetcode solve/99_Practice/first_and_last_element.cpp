/*  solve the following question...
Given an array of integers sorted in ascending order, find the starting and ending position of a given
target value. If the target is not found , return [-1, -1] 
*/

#include<iostream>
using namespace std;

int find_key(int arr[], int n , int key){
    int s = 0; 
    int e = n-1;
    int m = s + (e - s) / 2;
    while(s<=e){
        if(key == arr[m]){
            return m;
        }
        if(key > arr[m]){
            s = m + 1;
        }
        else e = m - 1;
        m = s + (e - s) / 2;
    }
    return -1;
}

void insertion_short(int arr[], int n){
    for(int i = 0; i<n; i++){
        int j = i;
        while(arr[j] < arr[j-1] && j>0){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
    return ;
}

void take_input(int arr[], int n){
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    return ;
}
int main(){
    int n;
    cout <<"Enter the array size:- ";
    cin >> n;
    int arr[100];
    cout <<"Take value for array: " << endl;
    take_input(arr,n);
    // short the array:-  
    insertion_short(arr,n);
    int key;
    cout << "Enter the key element: " ;
    cin >> key;
    //find the key element:-
    int ans = find_key(arr,n,key);
    if(ans == -1){
        cout << "The entered key is not found in the array with postion : " << '[' << -1 << ',' << -1 << ']' << endl;
    }
    else {
        cout << "The first element and the last element of the key is: " << '[' << arr[ans-1] << ',' << arr[ans + 1] << ']' << endl; 
    }
    return 0;
}