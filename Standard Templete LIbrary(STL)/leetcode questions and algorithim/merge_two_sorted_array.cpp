#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector < int > v1 = {1, 3, 5, 7, 9};
    vector < int > v2 = {2, 4, 6};
    vector < int > v3;

    int s = v1.size() + v2.size();
    int k = 0;
    for(int i = 0; i < s ; i++){
        if(i < v1.size()){
            v3.push_back(v1[i]);
        }
        else{
            v3.push_back(v2[k]);
            k++;
        }
    }

    // to print the array...
    cout << "Before sorting the arary --> " << endl;
    for(auto i:v3){
        cout << i << " ";
    }cout << endl;

    sort(v3.begin(), v3.end());

    cout << "After sorting the array --> " << endl;
    for(auto i: v3){
        cout << i << " ";
    }cout << endl;
    return 0;
}