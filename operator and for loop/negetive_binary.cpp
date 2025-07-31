#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Take a negetive integer: ";
    cin >> n;
    if(n>0){
        cout << "Entered number is a positive number. Please a negetive number." << endl;
        return 0;
    }
    int bit;
    cout << "Enter how many bit(4,8,16,32) you want to take: ";
    cin >> bit;
    int arr[bit];
    int i = bit-1;
    int m = -n;
    while(m != 0){
        arr[i] = m&1;
        m = m >> 1;
        if(m == 0){
            for(int j = i-1; j>=0 ; j--){
                arr[j] = 0;
            }
        }
        i--;
    }
    // 1's compliment...
    for(int j = 0 ; j<bit ; j++){
        if(arr[j] == 0) arr[j] = 1;
        else arr[j] = 0;
    }
    // 2's compliment
    arr[bit-1] = arr[bit-1] + 1;
    for(int j = bit-1 ; j>=0; j--){
        if(arr[j] == 2){
            arr[j] = arr[j] % 2;
            arr[j+1] = arr[j+1] + 1;
        }
        else continue;
    }
    for(int j= 0 ; j<bit ; j++){
        printf("%d ", arr[j]);
    }
    return 0;
}