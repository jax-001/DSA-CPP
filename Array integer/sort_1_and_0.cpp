#include<iostream>
#include<stdbool.h>
using namespace std;

void printArray(int n, int arr[]){
    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    return;
}

void shot_array(int n, int arr[]){
    for(int  i = 0 ; i<n-1 ; i++){
        bool flag = true;
        if(arr[i] == 1) continue;
        else{
            for(int j = i+1; j<n; j++){
                if(arr[j] == 1){
                    // int temp = arr[j];
                    // arr[j] = arr[i];
                    // arr[i] = temp;

                    // to swap you can use a predefined function
                    swap(arr[i] , arr[j]);
                    flag = false;
                    break;
                }
            }
            if(flag == true) break;
        }
    }
    return ;
}
void take_input(int n, int arr[]){
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    return;
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[100];
    cout <<"Enter values for array: " << endl;
    // take values in 1 and 0 form
    take_input(n,arr);
    //shorting the array...
    shot_array(n,arr);
    // pirnt the array...
    printArray(n,arr);
    return 0;
}