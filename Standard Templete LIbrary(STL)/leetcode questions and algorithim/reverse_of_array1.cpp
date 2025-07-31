// using function...
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void printArray(vector < int > v){
    for(auto i: v){
        cout << i << " " ;
    }cout << endl;
    return ;
}

vector < int > reverse(vector < int > v){
    // using 2 pointer approach...
    // or you can simply use :- reverse(v.begin(), v.end());
    int s = 0; 
    int e = v.size() - 1 ;
    while(s<e){
        swap(v[s] , v[e]);
        s++;
        e--;
    }
    return v;
}

int main(){
    vector <int > v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    cout << "Before reverse --> " << endl;
    printArray(v);

    vector < int > ans = reverse(v);

    cout << "After reverse --> " << endl;
    printArray(ans);

    return 0;
}