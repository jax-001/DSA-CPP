#include<iostream>
using namespace std;
// done by sir... (approach 2)
int binarySearch(int s, int e, int arr[], int key){
    int mid = s + (e - s) / 2;
    while(s <= e){
        if(key == arr[mid]) return mid;
        if(key > arr[mid]) s = mid + 1;
        else e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return -1;
}
int find_pivot(int n, int arr[]){
    int start = 0; 
    int end = n-1;
    int mid = start + (end - start) / 2;
    while(start < end){
        if(arr[mid] > arr[0]){
            start = mid + 1;
        }
        else end = mid;
        mid = start + (end - start) / 2;
    }
    return start;
}
int main(){
    int n;
    int arr[100] = {7, 8, 9, 10, 12, 1, 2, 4};
    n = 8;
    int key = 10;
    int pivot = find_pivot(n,arr);
    int find;
    if(key >= arr[pivot] && key <= arr[n-1]){
        // find in second line...
        find = binarySearch(pivot, n-1, arr, key);
    }
    else {
        // find in first line...
        find = binarySearch(0, pivot - 1, arr, key);
    }
    cout << "The index number of the key element is: " << find << endl;
    return 0;
}