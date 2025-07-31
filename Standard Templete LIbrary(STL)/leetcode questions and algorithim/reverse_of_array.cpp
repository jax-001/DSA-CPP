#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector < int > v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    cout << "Before reverse --> " << endl;
    for(auto i:v){
        cout << i << " ";
    }cout << endl;

    // 2 pointer approach...  (without using algorithms...)
    for(int i = 0, j = v.size() - 1 ; i<j ; i++, j--){
        swap(v[i], v[j]);
    }

    cout << "After reverse --> " << endl;
    for(auto i:v){
        cout << i << " " ;
    }cout << endl;

    // reverse of a vector using algorithms
    cout << "Reverse the array again using reverse() --> " << endl;
    reverse(v.begin(), v.end()); 

    for(auto i:v){
        cout << i << " " ;
    }cout << endl;


    return 0;
}