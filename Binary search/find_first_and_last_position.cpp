#include<bits/stdc++.h>
using namespace std;

void findOccurance(vector < int > &vec, int key){
    int s = 0, e = vec.size() - 1;
    int f = -1, l = -1 ;
    while(s <= e){
        int m = s + (e - s) / 2;
        if(vec[m] == key){
            f = m;
            l = m;

            while(vec[m] == vec[m+1]){
                l++;
                m++;
            }
            while(vec[m] == vec[m-1]){
                m--;
                f--;
            }
            cout << f << "," << l << endl;
            return;
        }
        if(vec[m] < key){
            s = m + 1;
        }
        else{
            e = m - 1;
        }
    }
    cout << f << "," << l << endl;
}

int main(){
    vector < int > vec = {1, 2, 2, 3, 4, 4, 7, 7, 7, 8, 9};
    int key =7;

    findOccurance(vec, key);
    return 0;
}