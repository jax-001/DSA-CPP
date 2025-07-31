#include<iostream>
using namespace std;
void printArray(int k, int trr[]){
    for(int i = 0; i<k ; i++){
        cout << trr[i] << " ";
    }
    return;
}
void find_duplicate(int n, int arr[], int trr[]){
    int k = 0;
    for(int i = 0 ; i<n-1; i++){
        for (int j = i+1 ; j<n; j++){
            if(i == j) continue;
            if(arr[i] == arr[j]){
                trr[k] = arr[i];
                k++;
                continue;
            }
        }
    }
    printArray(k,trr);
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
    cout << "Enter vlaue for arr[]: "<< endl;
    take_input(n,arr);

    // find duplicate..
    int trr[100];
    find_duplicate(n,arr, trr);
    return 0;
}