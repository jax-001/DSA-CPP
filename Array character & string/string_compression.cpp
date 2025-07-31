/* leetcode :-> 443
    input:- "aabbccc"
    output:- "a2b2c3" and also the size of the new string i.e 6
*/
// this is for letters occurance 1 - 9....for more go for next one....
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string answerString(string chars){
    string vec;
    vec.push_back(chars[0]);
    int extra = 0;
    int count = 0;

    for(auto ch : chars){
        if(vec.back() != ch){
            if(count > 9) extra++;
            vec.push_back(count+48);
            vec.push_back(ch);
            count = 1;
        }
        else{
            count++;
        }
    }

    if(count > 9) extra++;
    vec.push_back(count+48);
    cout << "Total size of the new vector is --> " << (vec.size() - extra + 1) << endl;

    return vec;
}

int main(){
    string chars;
    cout << "Take input for the input string:-> " << endl;
    getline(cin , chars);

    string answer = answerString(chars);
    cout << answer << endl;

    return 0;
}