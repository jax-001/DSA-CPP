// without using algorithms...
#include<iostream>
using namespace std;

void printArray(int trr[], int s){
    for(int i = 0; i<s; i++){
        cout << trr[i] << " ";
    }cout << endl;
    return ;
}
void sorting_array(int arr[], int m, int srr[], int n, int trr[]){
    int i = 0, j = 0;
    int k = 0;
    while(k < m+n){
        if( i>=m || j >= n ){
            if(i>=m){
                // the below there lines can be written in a single line of code as follow...
                // trr[k++] = srr[j++];
                trr[k] = srr[j];
                k++;
                j++;
            }
            if(j>=n){
                trr[k] = arr[i];
                i++;
                k++;
            }
        }
        else{
            if(arr[i] < srr[j]){
                trr[k] = arr[i];
                i++;
                k++;
            }
            else{
                trr[k] = srr[j];
                j++;
                k++;
            }
        }
    }
    return ;
}
int main(){
    int arr[] = {1, 3, 5, 7, 9};
    int srr[] = {2, 4, 6};

    int m = sizeof(arr) / sizeof(int);
    int n = sizeof(srr) / sizeof(int);

    int s = m + n;
    int trr[100];
    sorting_array(arr,m,srr,n,trr);
    printArray(trr,s);
    return 0;
}