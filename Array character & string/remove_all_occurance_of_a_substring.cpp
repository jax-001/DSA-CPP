// leetcode :- 1910
/*
    ip :- daabcbaabcbc  part:- abc
    op:- dab
    process:- step1 :- remove abc form ip, the input becomes:- dabaabcbc
              step2 :- remove again abc (if present) :- dababc
              step3 :- remove abc again(if present) :- dab
    // totaly you have to remove abc in each step if present... if not then that is the final answer...
*/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string removePart(string str, string part){
    string answer;
    int store = 0;
    for(int i = 0 ; i<str.length() ; ){
        int count = 0;
        int k = i;
        if(str[i] == part[0]){
            for(int j = 0; j<part.length() ; j++){
                if(str[k] == part[j]){
                    count++;
                    k++;
                }
                else{
                    answer.push_back(str[i]);
                    i++;
                    break;
                }
                if(count == part.length()){
                    i+=3;
                    store++;
                }
            }
        }
        else{
            answer.push_back(str[i]);
            i++;
        }
    }
    if(store == 0){
        return answer;
    }
    else{
        return removePart(answer , part);
    }
}

int main(){
    string str;
    cout << "Take input for the string --> " ;
    getline(cin , str);
    string part;
    cout << "Take input for the part --> ";
    getline(cin, part);

    cout << "After removal of all part --> " << removePart(str,part) << endl;
    return 0;
}