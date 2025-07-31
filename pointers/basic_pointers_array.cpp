#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int i = 2;
    // for c++  if we print only arr, then it show the address of the array...
    cout << arr << endl;

    cout << arr[i] << endl;
    cout << i[arr] << endl;
    cout << i[arr+1] << endl;
    cout << ++i[arr] << endl;
    cout << ++i[arr+1] << endl;


/*
    here:- arr[i] == i[arr]

    derived from the formula:- 
    arr[i] = *(arr+i)    
    arr means it indicates the 1st address of the array...
    arr+i :- next memory address which you want to go...

    when we write: i[arr] :-> *(i + arr)    which is equal to *(arr + i)
    that's why it shows no error...
*/



    int getSum(int arr[], int size);
    cout << "size of the array: " << sizeof(arr) << endl;
    cout << "sum of all elements is: " << getSum(arr,5) << endl;
    // the advantage of sending pointer to the function i.e. int *arr is:- 
    // you can send a part of an array to the function...
    cout << "sum of part of the array is: " << getSum(arr+3 , 5 - 3) << endl;


    // * ATTENTION...
/*
    int srr[4] = {1, 2, 3, 4};
    int* ptr = srr++;        // this will show some error. You can't update the address of an array using increment of decrement operator...
                             // and you can't do this:- arr = arr + 1;   
                             // you can do this using pointer...
    cout << *ptr << endl;
*/ 

    int srr[3] = {1, 2, 3};
    int* ptr = srr;
    cout << "Ptr is : " <<ptr << endl;
    cout << "Ptr is : " << *ptr << endl;

    ptr = ptr + 1;
    cout << "Ptr is : " << ptr << endl;

    return 0;
}

int getSum(int arr[], int size){
    cout << "Size of the array: " << sizeof(arr) << endl;
    // it prints the size of the pointers that stores the address of the 1st index of the array...
    // actually it passes :- int getSum(int *arr, int size)
    int sum = 0;
    for(int i = 0; i<size ; i++){
        sum += i[arr];
    }
    return sum;
}