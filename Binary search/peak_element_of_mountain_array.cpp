#include<iostream>
using namespace std;
int find_peak(int n, int arr[]){
    int ans;
    int start = 0; 
    int end = n-1;
    int mid = start + (end - start) / 2;
    while( start < end){
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }
        else {
            end = mid;
        }
        mid = start + (end - start) / 2 ;
    }
    return start;
}
int main(){
    int n; // size of the array...
    int arr[] = {0,10,5,2};
    n = 4;
    int peak = find_peak(n, arr);
    cout << "The peak element is at the index: " << peak << endl;
    return 0;
}