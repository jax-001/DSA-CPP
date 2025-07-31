// I/p :- s = "loveleetcode" , key = "e"
// O/p :- {3,2,1,0,1,0,0,1,2,2,1,0}    
// closest distance from key element...

#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i<size ; i++){
        cout << arr[i] << " " ;
    }cout << endl;
    return ;
}

void distance_btw_character(string str, int size, char key){
    int arr[100];
    vector < int > vec;
    for(int i = 0; i<size; i++){
        if(str[i] == key){
            arr[i] = 0;
            vec.push_back(i);
        }
    }
    int p1 = vec[0];  // pointer 1
    int p2 ;  // pointer 2
    int k = 0;    // for vector ....to move the pointers...
    // find distance...
    for(int i = 0; i<size ; i++){
        if(str[i] == key){
            k++;
            p2 = p1;
            p1 = vec[k];
            continue;
        }
        else if(p1 == vec[0] && str[i] != key){
            arr[i] = p1 - i;
        }
        else if(p1 != vec[0] && str[i] != key){
            if(abs(p1 - i) < abs(p2 - i)){
                arr[i] = abs(p1 - i);
            }
            else{
                arr[i] = abs(p2 - i);
            }
        }
    }
    printArray(arr , size);
}

int length( string str){
    int count = 0;
    for(int i = 0; str[i] != '\0' ; i++){
        count++;
    }
    return count;
}

int main(){
    string str;
    cout << "Take a string --> ";
    cin >> str;
    int size = length(str);
    char ch;
    cout << "Enter the key character --> ";
    cin >> ch;

    // find the distance
    distance_btw_character(str , size , ch);
    return 0;
}