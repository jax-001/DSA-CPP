#include<iostream>
using namespace std;

bool checkElem(int *arr, int size , int key){
/*  // two approach are right. you can do any one you want. this is reducing the array size by adding 1 byte in each iteration...

    if(size == 0) return false;
    if(key == arr[0]) return true;
    bool flag = checkElem(arr+1, size - 1 , key);
    return flag;
*/

    // here only size decreases...
    if(size < 0) return false;
    if(key == arr[size]) return true;
    bool flag = checkElem(arr, size-1, key);
    return flag;

}

int main(){
    int n;
    cout << "Enter the size of the array: " ;
    cin >> n;

    int arr[100];
    cout << "Take input for the array: " << endl;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key value you want to search: " ;
    cin >> key;

    //bool check = checkElem(arr,n, key);
    bool check = checkElem(arr, n-1, key);
    
    if(check == true){
        cout << "The entered key element is present in the array. " <<endl;
    }
    else{
        cout <<"The entered key element is absent in the array." << endl;
    }

    return 0;
}