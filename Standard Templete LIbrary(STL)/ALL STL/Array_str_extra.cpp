#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main(){

    // basic array
    int basic[4] = {1, 2, 3, 4};

    // syntax: array < datatype, size > array_name = {};
    array < int , 4 >arr = {1, 3, 2, 4};

    // for(int i = 0; i < 4 ; i++){        // you can take user input also...
    //     cin >> arr[i];
    // }


    //1.  arr.at(index) throws an exception if out-of-bound, but in normal array: arr[index] may cause an memory error
    cout << arr.at(0) << endl;
    //cout << arr.at(8) << endl;
    //cout << basic[8] << endl;   // the entire code will not gonna run...


    // 2. you can check size using arr.size() function...
    cout << arr.size() << endl;


    // 3. begin() :- returns the address of 1st element.
    //    end()   :- returns the address of last element.
    // you can use it for sort() and reverse()

    sort(arr.begin(), arr.end());
    for(int i = 0 ; i<4 ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
    reverse(arr.begin(), arr.end());


    //4.  you can copy using '=' operator...
    array<int , 4 > arr2 = arr;
    for(int i = 0; i< 4 ;i++){
        cout << arr2[i] << " ";
    }


    return 0;
}