#include<iostream>
using namespace std;

int get_sum(int* arr, int size){
    if(size == 0) return 0;
    if(size == 1) return arr[size - 1];
    return arr[size - 1] + get_sum(arr, size-1);
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    int sum = get_sum(arr, size);

    cout << "Sum is " << sum << endl;
    return 0;
}