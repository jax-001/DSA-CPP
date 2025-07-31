// I/O :- {3,4,5,1,2}   O/P :- true
// I/O :- {2,1,3,4}     O/P :- false
// I/O :- {1,2,3}       O/P :- true
// I/p :- {1,1,1}       O/P :- true

#include<iostream>
#include<vector>
#include<algorithm>
#include<stdbool.h>
using namespace std;

int check_vector_pivot(vector < int > vec){
    // to find minimum element form the vector we can use min_element()...
    auto mini = min_element(vec.begin(), vec.end());    // it returns an iterator type, and you can't store it in int
    // find pivot of the given vector..
    int s = 0;
    int e = vec.size() - 1;
    int m = s + ( e - s ) / 2;
    int ans;
    while(s < e){
        if(vec[m] >= vec[0]){
            s = m + 1;
        }
        else {
            e = m;
        }
        m = s + ( e - s ) / 2;
    }
    if( vec[s] == *mini){
        return 0;
    }
    else return 1;
}

int check_vector(vector < int > vec){
    // bubble sort...
    for(int i = 0; i<vec.size() ; i++){
        bool flag = false;
        for(int j = 0; j<vec.size() - 1 - i ; j++){
            if(vec[j] > vec[j+1]){
                swap(vec[j] , vec[j+1]);
                flag = true;
            }
            if(flag == true){
                return 1;
            }
            else return 0;
        }
    }
}

void take_input(vector < int > &vec , int n){
    for(int i = 0; i<n ; i++){
        int store;
        cin >> store;
        vec.push_back(store);
    }
    return ;
}

int main(){
    int n;
    cout << "Enter the vector size --> " ;
    cin >> n;
    vector < int > vec;
    cout << "Take input for vector --> " << endl;
    take_input(vec , n);
    
    // check wheather the entered vector is rotated or not...
    int ans;
    if(vec[0] > vec[n-1]){
        ans = check_vector_pivot(vec);
    }
    else{
        ans = check_vector(vec);
    }
    if(ans == 1){
        cout << "The given vector is not sorted." << endl;
    }
    else {
        cout << "This is a sorted vector." << endl;
    }
    return 0;
}