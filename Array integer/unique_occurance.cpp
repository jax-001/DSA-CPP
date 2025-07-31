#include<iostream>
#include<stdbool.h>
using namespace std;
// there is some mistake go for next one...
int check_count(int count , int trr[] , int k){
    for(int i = k-1 ; i>=0; i--){
        if(count == trr[k]) return 0;
    }
    return 1;
}
int check_pre(int r, int arr[]){
    for(int j = r-1; j>=0 ; j--){
        if(arr[r] == arr[j]){
            return 1;
        }
    }
    return 0;
}
void check_occurance(int n, int arr[], int trr[]){
    bool flag = true;
    int k = 0;
    for(int i = 0; i<n; i++){
        int count = 0;
            if(i>=1){
                int num = check_pre(i,arr);
                if(num == 1){
                    continue;
                }
            }
        for(int j = 0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        trr[k] = count ;
        k++ ;
        if(k>1){
            int con = check_count(count, trr,k);
            if(con == 0){
                cout << "False" << endl;
                flag = false;
                break;
            }
        }
    }
    if(flag == true) cout << "True" << endl;
    return;
}
void take_input(int n, int arr[]){
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    return ;
}
int main(){
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int arr[100];
    cout << "Enter the value for the array: " << endl;
    take_input(n, arr);

    // check unique occurance....
    int trr[100];
    check_occurance(n,arr,trr);
    return 0;
}