/* leetcode:- 1047
    input :- abbaca
    output:- step1 --> aaca
             step2 --> ca
             now there is no adjacent duplicate then return ca
    o/p :-> ca
*/

#include<iostream>
#include<string>
#include<algorithm>
#include<stdbool.h>
using namespace std;

string removeOccurance(string s){
    string result;

    for(auto ch : s){
        if(!result.empty() && ch == result.back()){
            result.pop_back();
        }
        else{
            result.push_back(ch);
        }
    }
    
    return result;
}

int main(){
    string s;
    cout << "Take input for the string --> ";
    getline(cin , s);
    cout << "After removal of adjecent occurance --> " << removeOccurance(s) << endl;
    return 0;
}
