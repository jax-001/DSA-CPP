/*
ip :- my name is biswa
op:- biswa is name my
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string reverseString(string str){
    // string initialliser...
    // syntax:- string name(size, ' ');
    string answer(str.length() , ' ');
    int k = str.length() - 1;
    for(int i = 0; i<str.length() ; ){
        string cut ;
        if(str[i] == ' '){
            i++;
            continue;
        }
        else{
            while( (str[i] != ' ')  &&  (i < str.length()) ){
                cut.push_back(str[i]);
                i++;
            }
            reverse(cut.begin(), cut.end());
            for(int j = 0; j< cut.length() ; j++){
                answer[k] = cut[j];
                k--;
            }
            answer[k] = ' ';
            k--;
        }
    }
    return answer;
}
int main(){
    string str;
    cout << "Take input for the string --> " ;
    getline(cin, str);
    cout << str << endl;
    
    string ans = reverseString(str);
    cout << "After reverse of words the string is --> " << endl;
    cout << ans << endl;
    return 0;
}