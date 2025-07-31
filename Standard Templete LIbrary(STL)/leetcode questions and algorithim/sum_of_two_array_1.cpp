// question is on main code..
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

void add_two_array(vector < int > vec1, vector < int > vec2 , vector < int > &vec3){
    int m = vec1.size();
    int n = vec2.size();
    int i = m - 1;
    int j = n - 1;
    int carry = 0;

    while(i>=0 && j>=0){
        int val1 = vec1[i];
        int val2 = vec2[j];

        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum % 10;
        vec3.push_back(sum);
        i--;
        j--;
    }

    // first case...(m>n)
    while(i>=0){
        int sum = carry + vec1[i];
        carry = sum / 10;
        sum = sum % 10;
        vec3.push_back(sum);
        i--;
    }

    //second case... (n>m)
    while(j>=0){
        int sum = carry + vec2[j];
        carry = sum / 10;
        sum = sum % 10;
        vec3.push_back(sum);
        j--;
    }

    // third case... (there is still some carry present)
    while(carry != 0){ 
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        vec3.push_back(sum);
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

    add_two_array(vec1, vec2, vec3);

    reverse_array(vec3);

    printVector(vec3);
    
    return 0;
}