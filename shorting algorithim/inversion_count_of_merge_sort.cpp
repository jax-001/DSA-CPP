/*  // application of merge sort...
    Inversion count is nothing but the total number of steps remain to sort the total array.
    When the array is already in sorted order then it is : 0
    But the array is totally in reverse order then it is maximum.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int count(vector < int > &vec){
    int ans = 0;
    for(int i = 0; i<vec.size() ; i++){
        for(int j = 0; j<vec.size(); j++){
            if(vec[i] > vec[j]){
                ans ++;
            }
        }
    }

    return ans;
}

int main(){
    vector < int > vec = {4, 3, 2, 1};
    int size = vec.size();
    int InversionCount = count(vec);
    cout << "Total steps from sorting is: " << InversionCount << endl;
}