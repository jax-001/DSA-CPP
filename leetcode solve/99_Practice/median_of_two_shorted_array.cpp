/*  for example...
num1 = {1, 3, 4}
num2 = {7, 8};
after merge:- let num = {1, 3, 4, 7, 8};
total number of elements are: - 5
median is at index:- 5 / 2;  (in case of odd)
In case of even:- (previous + after) / 2;
*/

#include<iostream>
#include<limits.h>
using namespace std;

double find_median(int prr[], int p){
    double ans;
    if( p&1 ){
        ans = prr[p/2];
    }
    else {
        double max = prr[p/2];
        double min = prr[(p/2) - 1];
        ans = (max + min) / 2;
    }
    return ans;
}

void printArray(int prr[], int p){
    for(int i = 0; i<p ; i++){
        cout << prr[i] << " ";
    }
    return ;
}

void merge_array(int arr[], int trr[], int prr[], int n, int p){
    int k = 0;
    for(int i = 0; i<p ; i++){
        if(i < n){
            prr[i] = arr[i];
        }
        else {
            prr[i] = trr[k];
            k++;
        }
    }
    return ;
}

void selection_short(int srr[], int size){
    for(int i = 0; i<size-1; i++){
        int min = INT_MAX;
        int min_index = -1;
        for(int j = i; j< size ; j++){
            if(min > srr[j]){
                min = srr[j] ;
                min_index = j;
            }
        }
        swap(srr[i], srr[min_index]);
    }
    return;
}

void take_input(int srr[], int size){
    for(int i = 0 ; i<size ; i++){
        cin >> srr[i];
    }
    return ;
}
int main(){
    int n,m;
    cout << "Enter the size of the first array: " ;
    cin >> n;
    int arr[100];
    cout << "Enter the size for the second array: " ;
    cin >> m;
    int trr[100];

    // take input for the array: 
    cout << "Take input for 1st array: "<< endl;
    take_input(arr,n);
    cout << "Take input for the 2nd array: " << endl;
    take_input(trr,m);

    // merge two array...
    int p = m + n;
    int prr[100];
    merge_array(arr, trr, prr, n, p);

    // array shorting...
    selection_short(prr,p);

    // print the merged array..
    cout << "The array after merge: " << endl;
    printArray(prr, p);
    cout << endl;
    // find the median..
    double median = find_median(prr, p);
    cout << "The median of the merged array is: " << median << endl;
    return 0;
}