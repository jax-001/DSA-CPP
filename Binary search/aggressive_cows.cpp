//link: https://www.naukri.com/code360/problems/aggressive-cows_1082559?source=youtube&campaign=love_babbar_codestudio2

#include<iostream>
#include<stdbool.h>
using namespace std;

    // to print an array...
/*
void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}
*/
void shortArray(int arr[], int n){
    // bubble short...
    for(int i = 0; i< n-1; i++){
        bool flag = true;
        for(int j = 0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                flag = false;
                int temp = arr[j];
                arr[j] = arr[j+1]; 
                arr[j+1] = temp;
            }
        }
        if(flag == true){
            return;
        }
    }
    //printArray(arr,n);
    return;
}

int take_inputMax(int arr[], int n){
    int maxi = -1;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
        maxi = max(maxi, arr[i]);     // this will store the max value in maxi...
    }
    cout << "Maxi is: " << maxi << endl;
    return  maxi;
}

bool isPossible(int arr[], int n, int c, int mid){
    int cowCount = 1;
    int lastPosition = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i] - lastPosition >= mid){
            cowCount++;
            if(cowCount == c){
                return true;
            }
            lastPosition = arr[i];
        }
    }
    return false;

        // this is another method...
    /*
    for(int i = 0; i < 1 ; i++){
        for(int j = i+1; j<n; j++){
            int store = arr[j] - arr[i];
            if(store >= mid) {
                return true;
            }
        }
    }
    return false;
    */
}

int binarySearch(int arr[], int n, int c, int s, int e){
    shortArray(arr,n);
    int ans = 0;
    int mid = s + (e - s) / 2;
    while(s<=e){
        if(isPossible(arr, n, c, mid)){
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(){
    int c;
    cout << "Enter the number of cows: " ;
    cin >> c;
    int arr[100];
    int n;
    cout << "Enter the total number of stalls: " ;
    cin >> n;
    cout << "Take input for the stall codes: " << endl;
    int e = take_inputMax(arr,n);
    int s = 0;
    int ans = binarySearch(arr, n, c, s, e);
    cout << "Maximum minimum distance between two cows should be: "<< ans << endl;
    return 0;
}