#include<iostream>
#include<stdbool.h>
using namespace std;
// here is also some mistakes...
void printArray(int n , int arr[]){
    for(int i = 0; i<n ; i++){
        cout << arr[i] << " ";
    }
    return ;
}

bool check_duplicate(int k, int trr[]){
    for(int i = 0; i<k-2 ; i++){
        for(int j = i+1; j<k-1 ; j++){
            if(trr[i] == trr[j]) {
                return 0;
            }
        }
    }
    return 1;
}
int count_occurance(int n, int arr[], int trr[]){
    int count = 0;
    int k = 0;
    for(int i = count ; i<n; i++ ){
        int num = 0;
        for(int j = i ; j<n; j++){
            if(arr[i] == arr[j]){
                num ++;
                count ++;
            }
        }
        trr[k] = num;
        k++;
    }
    bool flag = check_duplicate(k,trr);
    if(flag == true){
        cout << "True" << endl;
    }
    else cout << "False" << endl;
    return 0;
}
// insertion short...
void short_arr(int n, int arr[]){
    for(int i = 1; i<=n-1; i++){ 
        int j = i;
        while((arr[j] < arr[j-1]) && j>0){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
    return ;
}
void take_input(int n, int arr[]){
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    return ;
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[100];
    cout << "Take input for arr[] : " << endl;
    take_input(n,arr);
    // short array...
    short_arr(n,arr);
    //count occurance...
    int trr[100];
    int store = count_occurance(n,arr,trr);

    return 0;
}