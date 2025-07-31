#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter total number of prints: ";
    cin >> n;
    int sum = 0;
    int a = 0 , b = 1;
    for (int i = 1; i<n ; i++){
        printf("%d ", sum);
        if(sum == 0) printf("%d ", 1);
        sum = a + b;
        a = b;
        b = sum;
    }
    return 0;
}