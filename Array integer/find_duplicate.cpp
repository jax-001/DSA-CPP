#include<iostream>
using namespace std;
int check_duplicate(int n, int arr[]){
    int ans = 0;
    for(int i = 0; i<n; i++){    // for size of the array you can use arr.size() if you don't know the size of the array..
        ans = ans ^ arr[i];
    }
    for(int j = 1 ; j<n; j++){
        ans = ans ^ j;
    }
    cout << "Duplicate number is: " << ans  << endl;
    return 0;
}
// take vlaue in 1,2....n-1  (and there is a duplicate element)
void take_input(int n, int arr[]){
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    return ;
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[100];
    cout << "Take input for array arr[]" << endl;
    take_input(n,arr);

    // check the duplicate number...
    int check = check_duplicate(n,arr);
    return 0;
}