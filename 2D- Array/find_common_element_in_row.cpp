/*
Input:
mat[4][5] = {{1, 2, 1, 4, 8},
             {3, 7, 8, 5, 1},
             {8, 7, 7, 3, 1},
             {8, 1, 2, 7, 9},
            };

Output: 
1 8 or 8 1
8 and 1 are present in all rows
*/

#include<iostream>
#include<vector> 
#include<set>
#include<algorithm>                
using namespace std;

void eraseElem(set < int > &ans, int key){
    set < int > :: iterator it = ans.begin();
    for(const auto& i : ans){
        if(key == i){
            ans.erase(i) ;
            break;
        }
        it++;
    }
    return ;
}

void checkRepetation(vector < vector < int >> &vec, set < int > &ans, int row){
    vector < int > ans1;
    for(const auto& i : ans){
        ans1.push_back(i);
    }

    for(const auto& i : ans1){
        int flag = 0;
        for(int j = 0; j<vec[0].size() ; j++){
            if(i == vec[row][j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            eraseElem(ans, i);
        }
    }
    return ;
}

int main(){
    
    vector < vector < int >> vec (4, vector < int > (5));
    vec = {  {1, 2, 1, 4, 8},
             {3, 7, 8, 5, 1},
             {8, 7, 7, 3, 1},
             {8, 1, 2, 7, 9},
            };

    set < int > ans; // to store repetation...

    int row = 0;
    for(int i = 0; i<vec[0].size() ; i++){
        for(int j = 0; j<vec[0].size() ; j++){
            if(vec[row][i] == vec[row+1][j]){
                ans.insert(vec[row][i]);
            }
        }
    }

    row = 2;
    while(row < vec.size()){
        checkRepetation(vec, ans, row);
        row++;
    }

    cout << "The common elements are: " << endl;
    for(auto i : ans){
        cout << i << " " ;
    }cout << endl;

    return 0;
}
