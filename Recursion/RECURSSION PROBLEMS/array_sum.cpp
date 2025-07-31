#include<iostream>
using namespace std;

int get_sum(int *arr, int size){
    if(size == -1) return 0;
    if(size == 0) return arr[size];
    return arr[size] + get_sum(arr, --size);
}

int main(){
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    int arr[100];
    cout << "Take input: " << endl;
    for(int i = 0; i<n ; i++){
        cin >> arr[i];
    }

    int sum = get_sum(arr, n-1);
    cout << "Total addition of all elements are: " << sum << endl;
    return 0;
}