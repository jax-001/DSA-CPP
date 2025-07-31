#include<iostream>
using namespace std;
// Done by me...  (approach 1)
int find_key(int n, int arr[], int key, int pivot){
    int start = 0,end = n-1;
    while(start <= end){
        if(key == arr[pivot]) return pivot;
        if(key > arr[pivot] && key <= arr[end]){
            start = pivot + 1;
        }
        else end = pivot - 1;
        pivot = start + (end - start) / 2;
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
    int key = 1;
    int pivot = find_pivot(n,arr);
    int find = find_key(n,arr,key,pivot);
    cout << "The index number of the key element is: " << find << endl;
    return 0;
}