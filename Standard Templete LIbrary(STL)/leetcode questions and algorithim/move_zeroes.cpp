// i/p = {0, 1, 0, 3, 12}  -->  o/p = {1, 3, 12, 0, 0}
// i/p = {2, 0, 1, 0, 3, 0} --> o/p = {2, 1, 3, 0, 0, 0}

#include<iostream>
#include<vector>
#include<algorithm>
#include<stdbool.h>
using namespace std;

void printVector(vector < int > v){
    for(auto i:v){
        cout << i << " ";
    }cout << endl;
    return ;
}

// you can also do this through selection sort...
void bubbleSort(vector < int > &v){
    for(int i = 0 ; i<v.size()-1 ; i++){
        bool flag = false;
        for(int j = i; j< v.size()-i-1 ; j++){
            if(v[j] == 0){
                swap(v[j] , v[j+1]);
                flag = true;
            }
        }
        if(flag == false){
            break;
        }
    }
    return;
}
int main(){
    vector < int > v = {2, 0, 1, 0, 0, 3, 0};
    cout << "Before sorting --> " << endl;
    printVector(v);
    bubbleSort(v);
    cout << "After sorting --> " << endl;
    printVector(v);
    return 0;
}