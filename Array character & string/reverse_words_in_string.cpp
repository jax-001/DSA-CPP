/*
ip :- my name is biswa
op:- ym eman si awsib
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout << "Take input for the string --> " ;
    getline(cin, str);
    cout << str << endl;
    // reverse words in string...
    int k = 0;
    for(int i = 0; i<str.length() ; ){
        string cut ;
        if(str[i] == ' '){
            i++;
            continue;
        }
        else{
            while(str[i] != ' ' && i < str.length()){
                cut.push_back(str[i]);
                i++;
            }
            reverse(cut.begin(), cut.end());
            for(int j = 0; j<cut.length() ; j++){
                str[k] = cut[j];
                k++;
            }
            str[k] = ' ';
            k++;
        }
    }

    cout << "After reverse of words the string is --> " << endl;
    cout << str << endl;
    return 0;
}