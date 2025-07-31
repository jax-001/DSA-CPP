#include<iostream>
using namespace std;
void printArray(int k , int trr[]){
    for(int i = 0 ; i<k; i++){
        cout << trr[i] << " ";
    }
    return ;
}
void unique_num(int n, int arr[], int trr[]){
    int k = 0;
    for(int i = 0; i<n; i++){
        int count = 0;
        for(int j = 0; j<n; j++){
            if(arr[i] == arr[j]){
                count += 1;
            }
        }
        if(count == 1){
            trr[k] = arr[i];
            k++;
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
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int arr[100];
    
    cout << "Enter value for arr[]: ";
    take_input(n,arr);

    //find unique...
    int trr[100];
    unique_num(n,arr,trr);

    return 0;
}