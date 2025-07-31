#include<iostream>
using namespace std;

bool findElem(int arr[], int key, int s, int e){
    if(s > e) return false;
    int m = s + (e - s) / 2;
    if(arr[m] == key) return true;
    if(arr[m] < key){
        return findElem(arr , key, m+1, e);
    }
    else{
        return findElem(arr, key, s, m-1);
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int key = 1;
    bool check = findElem(arr, key, 0, 4);
    if(check == true){
        cout << "The element is present in the array." << endl;
    }
    else{
        cout << "The element is not present in the array." << endl;
    }
    return 0;
}
