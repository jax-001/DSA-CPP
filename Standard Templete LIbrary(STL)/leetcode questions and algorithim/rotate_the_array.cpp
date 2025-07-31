// I/P = {1,2,3,4,5,6,7} and k = 3 (says)...
// you have to rotate the array to the right by k steps...
// O/P = {5,6,7,1,2,3,4}  


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printVector(vector < int > myVector){
    for(auto i : myVector){
        cout << i << " " ;
    }cout << endl;
    return ;
}

void rotateVector(vector < int > &myVector , int n , int key){
    // reduce the key if it is greater then n...
    key = key % n;
    if(key == 0){
        return ;
    }

    /* method:- 01     // use of rotate() function...
    int left = myVector.size() - key ;
    rotate(myVector.begin(), myVector.begin()+left , myVector.end());
    */

    /*method :- 02        // use of right shift...
    for(int i = 0; i<key ; i++){
        int temp = myVector[n-1];
        for(int j = n-1; j>0; j--){
            myVector[j] = myVector[j-1];
        } 
        myVector[0] = temp;
    }
    */

    /* method :- 03     // use of reverse()  function...
    // let myVector = {1,2,3,4,5,6,7}
    reverse(myVector.begin(), myVector.end());   // 7,6,5,4,3,2,1
    reverse(myVector.begin(), myVector.begin()+key);  // 5,6,7,4,3,2,1
    reverse(myVector.begin()+key, myVector.end());  //5,6,7,1,2,3,4
    */

    /* method :- 4*/\
    vector < int > temp(myVector.size());   // it will create a new vector temp with size same as myVector
    for(int i = 0; i<myVector.size() ; i++){
        temp[(i+key)%temp.size()] = myVector[i];   // check this out by yourself
    }
    // copy temp into myVector....
    myVector = temp;
    return ;
}

void take_input(vector < int > &myVector , int n){
    for(int i = 0; i<n ; i++){
        int value;
        cin >> value;
        myVector.push_back(value);
    }
    return ;
}

int main(){
    vector < int > myVector;
    int n;
    cout << "Enter the size of the vector --> " ;
    cin >> n;
    cout << "Take input for vector --> " << endl;
    take_input(myVector ,n);

    int key;
    cout << "Enter the rotatio steps --> " ;
    cin >> key;

    cout << "Before rotate the array is --> " << endl;
    printVector(myVector);

    // rotate the array...
    rotateVector(myVector, n , key);

    cout << "After rotate the array is --> " << endl;
    printVector(myVector);
    return 0;
}