#include<iostream>
#include<array>   // to include stl array...
using namespace std;
int main(){
    // for basic array, we can declare by following...
    int basic[3] = {1,2,3};

    // for stl array, we can decalre by following...
    //Syntax:-  array<data type, array size > array name = { elements};
    array<int , 4> arr = {1,2,3,4};

    // we can do following operations through this...

    // we can find out total size of the array...
    int size = arr.size();

    // we can print the array...
    for(int i = 0; i<size ; i++){
        cout << arr[i] << endl;
    }

    // we can find out any element using at() function...
    cout << "Element at 2nd index: " << arr.at(2) << endl;

    // we can find out the array is empty or not... return type boolean
    cout << "Empty or not: " << arr.empty() << endl;

    // we can find out first element and last element by this...
    cout << "First element: " << arr.front() << endl;
    cout << "Last element: " << arr.back() << endl;
    return 0;
}
