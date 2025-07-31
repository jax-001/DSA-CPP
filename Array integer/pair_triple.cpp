#include<iostream>
using namespace std;

void find_triple(int n, int arr[], int target){
    for(int i = 0; i<n-2; i++){
        for (int j = i+1; j<n-1; j++){
            for(int k = j+1; k<n; k++ ){
                if(arr[i] + arr[j] + arr[k] == target){
                    cout << arr[i] << ',' << arr[j] << ',' << arr[k] << endl;
                }
            }
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
    cout << "Take input for arr[]: " << endl;
    take_input(n,arr);
    cout << "Enter the target value: ";
    int target;
    cin >> target;
    // find pair that add to target...
    find_triple(n,arr,target);
    return 0;
}