// method 1...
#include<iostream>
using namespace std;
// time complexity:- worst case:- O(n^2)   best case:- O(n)
// space complexity:- O(1)
void insertion_short(int arr[], int n){
    for(int i = 1; i < n ; i++){
        int j = i;
        while(arr[j] < arr[j-1] && j > 0){
            swap(arr[j] , arr[j-1]);
            j--;
        }
    }
    return;
}
void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    return ;
}
int main(){
    int n;
    cout << "Enter array size: " ;
    cin >> n;
    int arr[100];
    cout << "Take value for array: " << endl;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Before short the array is: " << endl;
    printArray(arr,n);
    cout << endl;
    insertion_short(arr,n);
    cout << "After shorting the array is: " << endl;
    printArray(arr,n);
    return 0;
}