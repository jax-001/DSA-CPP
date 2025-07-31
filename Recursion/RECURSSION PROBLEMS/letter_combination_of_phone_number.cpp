//leetcode:- 17
#include<iostream>
#include<vector> 
#include<string>
#include<algorithm>
using namespace std;

void solve(string &str, int index, string &output, vector< string > &ans, vector< string >  &mapping){
    if(index >= str.length()){
        ans.push_back(output);
        return ;
    }

    int number = str[index] - '0';
    string value = mapping[number];

    for(int i = 0; i<value.length(); i++){
        output.push_back(value[i]);
        solve(str, index+1, output, ans, mapping);
        output.pop_back();
    }

    return;
}

int main(){
    string str;
    cout << "Enter a number string: " << endl;
    getline(cin , str);

    vector < string >  ans;
    if(str.length() == 0){
        return 0;
    }

    vector < string > mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs","tuv","wxyz"};
    string output;
    int index = 0;

    solve(str, index, output, ans, mapping);

    for(const auto& i: ans){
        cout << i << " " ;
    }
    cout << endl;

    return 0;
}