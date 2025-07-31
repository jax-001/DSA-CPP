/*
    Time complexity: 
    Avg. case: O(nlogn)
    Best case: O(nlogn)
    Worst case:  O(n^2)                 where n is the size of the array...
*/

#include<iostream>
using namespace std;

int partition(int *arr, int start, int end){

    int pivot = arr[start] ;
    int count = 0;
    for(int i = start+1 ; i<=end ; i++){
        if(pivot >= arr[i]){
            count ++;
        }
    }
    
    // pivot elem index
    int pivotIndex = start + count;
    // place pivot to its correct position...
    swap(arr[start], arr[pivotIndex]);

    int i = start , j = end;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++] , arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int *arr, int start , int end){
    if(start >= end){
        return ;
    }
    int p = partition(arr, start, end);

    quickSort(arr, start, p-1);
    quickSort(arr, p+1, end);

    return ;
}

int main(){
    int arr[12] = {6, 1, 4, 8, 2, 9, 1, 1, 9 , 9, 7, -3};
    int n = 12;
    quickSort(arr, 0, n-1);

    // sorted array...
    for(int i = 0 ; i<n ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
    return 0;
}