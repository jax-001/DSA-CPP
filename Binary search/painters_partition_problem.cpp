// link:  https://www.naukri.com/code360/problems/painter's-partition-problem_1089557?source=youtube&campaign=love_babbar_codestudio2

#include<iostream>
#include<stdbool.h>
using namespace std;
// rules are same as book_partition...
bool isPossible(int arr[], int mid, int p, int w) {
    int totalWork = 0;
    int worker = 1;
    for(int i = 0; i<w ; i++){
        if(totalWork + arr[i] <= mid){
            totalWork += arr[i];
        }
        else {
            worker ++;
            if(worker > p || arr[i] > mid){
                return false;
            }
            totalWork = arr[i] ;
        }
    }
    return true;
}

int minimum_work(int arr[] , int min, int max , int w, int p){
    int ans;
    int mid = min + (max - mid) / 2;
    while(min <= max) {
        if(isPossible(arr, mid, p , w)){
            ans = mid; 
            max = mid - 1;
        }
        else min = mid + 1;
        mid = min + (max - min) / 2;
    }
    return ans;
}

int take_input(int arr[], int w){
    int max = 0;
    for(int i = 0; i<w; i++){
        cin >> arr[i] ;
        max = max + arr[i];
    }
    return max;
}
int main(){
    int p , w;
    int arr[100] ;
    cout << "Enter the number of units to do : " ;
    cin >> w;
    cout << "Enter the numbers of workers: " ;
    cin >> p ;
    cout << "Take input for total different units: " << endl;
    int max = take_input(arr,w);   // total units of works to do...
    int min = 0;
    int ans = minimum_work(arr, min, max , w, p);
    cout << "Minimum work alloated is: "<< ans << endl;
    return 0;
}