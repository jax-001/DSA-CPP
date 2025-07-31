// leetcode:- 1624
// worng check further...
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

void printArray(int arr[]){
    for(int i = 0; i<2; i++){
        cout << arr[i] << " ";
    }cout << endl;
    return ;
}

int find_distance(string s){
    int n = s.length();
    int flag = 1;
    int arr[26] = {0};
    for(int i = 0; i<n; i++){
        if(arr[i] != 1){
            for(int j = i+1 ; j<n; j++){
                if(s[i] == s[j]){
                    arr[j] = 1;
                    flag = 0;
                }
            }
        }
    }
    int diff = 0;
    printArray(arr);
    if(flag == 1){
        return -1;
    }
    else{
        int store;
        for(int i = 0; i<n; i++){
            if(arr[i] == 1){
                store = i;
                break;
            }
        }
        cout << "Store --> " << store << endl;
        for(int i = 0; i<n; i++){
            if(s[store] == s[i]){
                diff = store - (i+1);
                break;
            }
        }
    }
    return diff;
}

int main(){
    string s;
    cout << "Take input for the string:- ";
    getline(cin , s);
    int distance = find_distance(s);
    cout << "The maximum difference between equal character is:- " << distance << endl;
    return 0;
}