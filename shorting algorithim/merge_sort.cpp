/*
    Time complexity: 
    Avg. case:  O(nlogn)
    Best case:  O(nlogn)
    worst case: O(nlogn)            where n is the size of the array...
*/

#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = s + (e - s) / 2;
    int len1 = (mid - s) + 1;
    int len2 = e - mid;

    // creating new arrays...
    int *first = new int[len1];
    int *second = new int[len2];

    // copying element to new arrays...
    int mainIndex = s;
    for(int i = 0 ; i<len1 ; i++){
        first[i] = arr[mainIndex++];
    }

    for(int i = 0 ; i < len2 ; i++){
        second[i] = arr[mainIndex++];
    }

    // merge two sorted array...
    int index1 = 0;
    int index2 = 0;
    mainIndex = s;
    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainIndex++] = first[index1++];
        }
        else{
            arr[mainIndex++] = second[index2++];
        }
    }

    while(index1 < len1){
        arr[mainIndex++] = first[index1++];
    }
    while(index2 < len2){
        arr[mainIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;

    return;

}

void mergeSort(int *arr, int s, int e){
    if(s >= e){
        return ;
    }

    int mid = s + (e - s) / 2;

    // for left part...
    mergeSort(arr, s, mid);
    // for right part..
    mergeSort(arr, mid+1, e);

    //now merge two array..
    merge(arr, s, e);
    return;
}

int main(){
    int arr[20] = {8, 4, 1, 9, 7, 2, 3, 3, 5, 2, 2, - 4, -5 , 0, 0 , 1, 5, 5, -9, 2};
    int n = 20;

    mergeSort(arr, 0, n-1);

    for(int i = 0; i<n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}