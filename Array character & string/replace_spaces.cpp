/* all spaces should be replaced with:- @40
    ip :- my name is biswa
    op :- my@40name@40is@40biswa
*/

// for inplace changing you can use insert function...
// syntax:- string(place , value);
// ex:- str(str.begin()+2, '@') ;  it will insert @ at index no 2... 
#include<iostream>
using namespace std;

string finalString(string str){
    string answer;
    string s = "@40";
    for(int i = 0; i<str.length() ; i++){
        char ch = str[i];
        if(ch == ' ' && i<str.length() - 1){
            answer += s;
        }
        else{
            //answer.push_back(ch);
            answer += ch;
        }
    }
    return (answer) ;
}

int main(){
    string str;
    cout << "Take input for string --> " ;
    getline(cin , str);

    cout << "Final string is --> " << finalString(str) << endl;
    return 0;
}