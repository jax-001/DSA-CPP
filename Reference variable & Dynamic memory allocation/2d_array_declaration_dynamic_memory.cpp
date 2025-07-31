#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout << "Enter the row and coulumn size: ";
    cin >> m >> n;

    int** arr = new int* [m];
    // it indifies that a array created named "arr" which basically contains "m" number of pointers in heap memory...
    // now each pointer of heap memory will be connected to a 1d-array of size "n"..
    // which overally makes a 2d-array of "m" rows and "n" columns...

    
    // connecting to a pointer to an array...
    for(int i = 0; i<m ; i++){
        arr[i] = new int[n];
    }  // now 2d array created...


/*
    // all total making a 2d array: 
    int** arr = new int* [m];
    for(int i = 0; i<m ; i++){
        arr[i] = new int[n];
    }
*/

    // taking input...
    for(int i = 0; i<m ; i++){
        for(int j = 0; j<n ; j++){
            cin >> arr[i][j];
        }
    }


    // to print the array...
    for(int i = 0; i<m ; i++){
        for(int j = 0; j<n ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    // how it is assessed is for arr[i][j] : 
    // the pointer arithmatic is calculated as follow: 
    //    *(*(arr+i)+j)
    

    //ATTENTION...
    // If you use heap memory then you have to clear the memory manually...
    // either it will stuck there making the other programm slow...



    // how to clear the 2d array form heap memory...
    
    // first relesing the j wala memory...then i wala memory...
    for(int i = 0; i < m ; i++){    // deleting the inside heap arrays...
        delete[] arr[i];
    }

    delete[] arr;   // deleting the outside heap array...
    



    // here delete[] is a operator using to delete a pointer which points to an array...
    // but delete is used to delete a pointer which is point to a single object...

    // for example of delete[] is above...
    // example of delete is below...
    int* a = new int;
    cout << "a is: " ;
    cin >> *a;
    cout << "a is :"<< *a << endl; 
    delete a ;

    return 0;
}