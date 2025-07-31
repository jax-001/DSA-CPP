#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void printvector(vector < int > v){
    for(auto i:v){
        cout << i << " " ;
    }cout << endl;
    return;
}

vector < int > reverse (vector < int > v , int h){
    int s = h + 1;
    int e = v.size() - 1;
    while(s<e){
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

int main(){
    vector < int > v = {1,2,3,4,5,6};
    int h = 3;
    // you have to rotate the array after at position 3 . that means the array will be {1,2,3,4,6,5}

    cout << "Before reverse --> " << endl;
    printvector(v);

    vector < int > ans = reverse (v , h);

    cout << "After reverse --> " << endl;
    printvector(ans);
    return 0;
}
