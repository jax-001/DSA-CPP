#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    //edge case...
    if(n == 0){
        cout << 1 << endl;
        return 0;
    }
    int m = n;
    int mask = 0;
    while(m != 0){
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    cout << ans << endl;

    return 0;
}
