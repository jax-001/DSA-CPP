#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int ans = 0;
    int i = 0;
    cout << "Enter a number: ";
    cin >> n;
    while(n != 0){
        int bit = n & 1;
        cout<<"n: "<<n<<endl;
        cout<<"bit: "<<bit<<endl;
        ans = bit * pow(10, i)+ ans;
        cout<<"ans: " << ans << endl;
        n = n >> 1;
        i++;
        cout<<endl;
    }
    cout << "Binary is : "<< ans << endl;
    return 0;
}