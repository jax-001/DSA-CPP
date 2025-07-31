// leetcode :- 567
// this is for any length of a permutation string...
#include<iostream>
#include<string>
using namespace std;

bool checkWindow(int arr[], int srr[]){
    for(int i = 0; i<26; i++){
        if(arr[i] != srr[i]){
            return 0;
        }
    }
    return 1;
}
bool checkPermutation(string main, string part, int arr[]){
    int index; 
    int k;
    for(int i = 0; i<main.length() ; i++){
        int srr[26] = {0};
        k = i;
        if(i < main.length() - 1){
            for(int j = 0; j< part.length() ; j++){
                char ch = main[k];
                if(ch >= 'a' && ch <= 'z'){
                    index = ch - 'a';
                    srr[index]++;
                }
                else if(ch >= 'A' && ch <= 'Z'){
                    index = ch - 'A';
                    srr[index]++;
                }
                k++;
            }
            bool flag = checkWindow(arr,srr);
            if(flag == true){
                return true;
            }
        }
    }
    return false;
}


void checkOccurance(string part, int arr[]){
    int index;
    for(int i = 0; i<part.length() ; i++){
        char ch = part[i];
        if(ch >= 'A' && ch <= 'Z'){
            index = ch - 'A';
            arr[index]++;
        }
        else if(ch >= 'a' && ch <= 'z'){
            index = ch - 'a';
            arr[index]++;
        }
    }
    return ;
}

int main(){
    string s1;
    cout << "Take input for main string --> " ;
    getline(cin , s1);
    string s2;
    cout << "Take input for the part string --> " ;
    getline(cin , s2);

    int arr[26] = {0};
    checkOccurance(s2 , arr);

    // check for permutation...
    cout << "Present or not --> " << checkPermutation(s1, s2, arr) << endl;
    return 0;
}