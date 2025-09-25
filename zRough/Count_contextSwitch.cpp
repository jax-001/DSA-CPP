#include<bits/stdc++.h>
using namespace std;

int main(){
    vector < int > vec = {22, 1, 10, -1, 8, 34, -4, 34, 5};
    unordered_map< int, int > umap;

    int n = vec.size();

    for(int i = 0; i < n-1 ; i++){
        int index = vec[i];
        int count = 0;
        for(int j = i; j < n-1; j++){
            if(vec[j] > vec[j+1]){
                count++;
                swap(vec[j], vec[j+1]);
            }
        }
        if(umap.find(vec[i]) == umap.end()){
            umap[index] = count;
        }
        else{
            if(umap[index] < count) umap[index] = count;
        }
    }

    int max = INT_MIN;
    int element = 0;
    for(auto i : umap){
        if(max < i.second){
            max = i.second;
            element = i.first;
        }
    }
    cout << element << endl;

}