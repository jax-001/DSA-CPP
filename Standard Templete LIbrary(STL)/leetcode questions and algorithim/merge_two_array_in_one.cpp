#include<iostream>
#include<vector>
using namespace std;

void printArray(vector < int > v1){
    for(auto i:v1){
        cout << i << " " ;
    }cout << endl;
    return ;
}


// here you have to make pass by reference. vector is not same as the array...
void merge(vector < int > &v1 , vector < int > &v2 ){
    int m = v1.size();
    int n = v2.size();
    int i = 0 , j = 0;
    while(i<m && j<n){
        if(v1[i] > v2[j]){
            v1.insert(v1.begin()+i , v2[j]);     // to insert you can use insert() of vector...
            i++;
            j++;
        }
        i++;
    }
    while(j<n){
        v1.push_back(v2[j]);
        j++;
    }
    return ;
}
int main(){
    vector < int > v1;
    vector < int > v2;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v2.push_back(2);
    v2.push_back(5);
    v2.push_back(6);
    merge(v1,v2);     // for pass by reference you don't have to give any '&' here....
    printArray(v1);
    return 0;
}