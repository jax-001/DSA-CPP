#include<iostream>
using namespace std;

/*
    Here i want to create a default argument i.e. if i don't give the value of start
    then it will print the whole array and if i give the value of start, only then it will
    start printing from there...
    
    ** it should be initialized from the right to left...
    Ex: void printArray(int arr[], int size, int start = 0, int end)  , and you pass value according to it
    but it will show error...
    
    correct approach: void printArray(int arr[], int size, int start = 0 , int end = 0)
    and pass value according to it...
    
*/

void printArray(int arr[], int size , int start = 0){
    // here now "start" is a default argument...
    // the defalut value is '0', it will change if you will pass some value...

    for(int i = start ; i<size ; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return ;
}

int main(){

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    printArray(arr, size);
    printArray(arr, size , 2);

    return 0;
}