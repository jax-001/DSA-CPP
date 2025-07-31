// Q:- addition of two given array..
/*
arr1 = {1,2,3,4}
arr2 = {6} 
arr3 = arr1 + arr2 => {1,2,4,0}  // that is the siple addition...
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printVector(vector < int > vec3){
    for(auto i:vec3){
        cout << i << " " ;
    }cout << endl;
    return ;
}

void reverse_array(vector < int > &vec3){
    int s = 0;
    int e = vec3.size()-1;
    while(s<e){
        swap(vec3[s], vec3[e]);
        s++;
        e--;
    }
    return ;
}

void add_two_vector(vector < int > vec1, int max, vector < int > vec2, int min, vector < int > &vec3){
    int store = 0;
    int m = max, n = min;
    for(int i = 0; i<max; i++){
        if(n>0){ 
            store = store + vec1[m-1] + vec2[n-1];
            if(store >= 10){
                int a = store % 10;
                vec3.push_back(a);
                store = store / 10;
                if(m == 1){   // for same size of two vector...i.e m = 3 and n = 3....(says)
                    vec3.push_back(store);
                    break;
                }
                m--;
                n--;
            }
            else{
                vec3.push_back(store);
            }
        }
        else{  // here only vec1 is present... for case (m>n)
            store = store + vec1[m-1];
            if(store >= 10){
                int a = store % 10;
                vec3.push_back(a);
                store = store / 10;
                if(m == 1){
                    vec3.push_back(store);
                    break;
                }
                m--;
            }
            else{
                vec3.push_back(store);
                m--;
                store = 0;
            }
        }
    }
    return ;
}

void take_input(vector < int > &vec , int size){
    for(int i = 0; i<size ; i++){
        int store;
        cin >> store;
        vec.push_back(store);
    }
    return ;
}

int main(){
    int m ,n ;
    cout << "Enter the size of vec1 --> " ;
    cin >> m;
    cout << "Enter the size of vec2 --> " ;
    cin >> n;
    vector < int > vec1;
    vector < int > vec2;
    vector < int > vec3;

    cout << "Take input for the vec1 -->> " << endl;
    take_input(vec1,m);
    cout << "Take input for the vec2 -->> " << endl;
    take_input(vec2,n);

    // addition of two vector...
    if(m>n){
        add_two_vector(vec1 , m , vec2, n, vec3);
    }
    else {
        add_two_vector(vec2, n, vec1, m, vec3);
    }
    //add_two_vector(vec1, vec2, vec3);

    // reverse the whole array...
    // you can reverse like below or you can use 2 pointer approach...
    //reverse(vec3.begin(), vec3.end());               // use of algorithm...

    // 2 pointer method...
    reverse_array(vec3);

    // print the vec3...
    printVector(vec3);
    return 0;
}