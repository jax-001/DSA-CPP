// solve following problem...
//Given a rotated sorted array, search for a target value and return its index. if not found, return -1
#include<iostream>
using namespace std;
int find_key(int arr[],int key , int start, int end){
    int mid = start + (end - start) / 2;
    while(start <= end){
        if(key == arr[mid]){
            return mid;
        }
        if(key > arr[mid]){
            start = mid + 1;
        }
        else end = mid;
        mid = start + (end - start) / 2;
    }
    return -1;
}
int find_pivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int m = s + (e - s) / 2;
    while(s < e){
        if(arr[m] > arr[0]){
            s = m + 1;
        }
        else e = m ;
        m = s + (e - s) / 2;
    }
    return s;
}
int main(){
    int n = 5;
    int arr[] = {7, 8, 1, 2, 3};
    int key;
    cout << "Enter the key element: " ;
    cin >> key;
    // find the pivot element...
    int pivot = find_pivot(arr, n);
    // now find the key element...
    int ans;
    if(key >= pivot && key < arr[0]){
        ans = find_key(arr, key, pivot, n-1);
    }
    else {
        ans = find_key(arr, key, 0, pivot - 1);
    }
    cout << "The key element is present at the index no: " << ans << endl;
    return 0;
}