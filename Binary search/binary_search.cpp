#include<iostream>
using namespace std;

// for binary search the array should be in shorted form...
int binarySearch(int arr[], int size , int key){
    int start = 0;
    int end = size - 1;
    //int mid = (start + end)/2 ;   this is logically right but the problem is if start + end exceeds total integer range i.e. 2^-31 - 1 , then it will give error...
    // to avoid that error we can use 
    int mid = start + (end - start)/2 ; 
    // binary search time complexity :- O(logn)
    while(start <= end){
        // if same then return mid...
        if(arr[mid] == key) return mid;
        // go to the right side of the middle...
        if(key > arr[mid]) start = mid + 1;
        // go to the left side of the middle...
        else end = mid - 1;
        mid = start + (end - start) / 2 ; 
    }

    return -1;
}
int main(){
    int even[6] = { 2, 4, 6, 8 , 12, 18};
    int odd[5] = {3, 8, 11, 12, 16};
    int key_even = 8;
    int key_odd = 11;
    int ret = binarySearch(even, 6, key_even);
    int rex = binarySearch(odd, 5 , key_odd);
    cout << "index of 8 is in even_array: " << ret << endl;
    cout << "index of 11 is in odd_array: " << rex << endl;
    return 0;
}