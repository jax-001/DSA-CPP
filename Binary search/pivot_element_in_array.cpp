#include<iostream>
using namespace std;
int find_pivot (int n, int arr[]){
    int pivot;
    int s = 0;
    int e = n-1;
    int mid = s + (e - s) / 2;
    while(s < e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else e = mid;
        mid = s + (e - s) / 2 ;
    }
    return s;
}
int main(){
    int n;   // size of the array...
    //int arr[5] = {7, 9, 1, 2, 3};
    //int arr[6] = {6, 7, 8, 1, 2, 3};
    int arr[6] = {3, 4, 6, 8, 1, 2};
    //int arr[6] = {6, 1, 2, 3, 4, 5};
    n = 6;
    int pivot = find_pivot(n,arr);
    cout << "The pivot is at the index : " << pivot << endl;
    return 0;
}