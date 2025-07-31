// Ip :- test
// Op :- t --> 2
// you have to find the maximum occurance of a character and return the character and the occurance...

// method :- 1
#include<iostream>
#include<algorithm>
#include<vector>
#include<limits.h>
using namespace std;

string convertToLowerCase(string s){
    for(int i=0 ; i < s.length() ; i++){
        if(s[i] >= 65 && s[i] <= 90){
            s[i] += 32;
        }
    }
    return s;
}

string removeSpecialChar(string str){
    string s;
    for(int i = 0; i<str.length() ; i++){
        char ch = str[i];
        if( (ch >= 65 && ch <= 90) || (ch>= 97 && ch <= 122) ){   // only characters are allowed...
            s.push_back(ch);
        }
    }
    return s;
}

int maxIndent(vector < int > vec){
    int max = INT_MIN;
    int ans;
    for(int i = 0; i<vec.size(); i++){
        if(max < vec[i]){
            max = vec[i];
            ans = i;
        }
    }
    return ans;
}

char find_character(string str, int arr[], vector < int > vec){
    int ans = maxIndent(vec);
    string answer;
    for(int i = 0; i<str.length() ; i++){
        if(arr[i] == 0){
            answer.push_back(str[i]);
        }
    }
    return answer[ans];
}

void checkOccurance(string str){
    int arr[str.length()];
    vector < int > vec;
    for(int i = 0; i < str.length() ; i++){
        int count = 1;
        if(arr[i] != 1){
            for(int j = i+1 ; j < str.length() ; j++){
                arr[i] = 0;
                if(str[j] == str[i]){
                    arr[j] = 1;
                    count ++;
                }
            }
            vec.push_back(count);
        }
    }
    char ch = find_character(str,arr,vec);
    auto maxOccurance = max_element(vec.begin(), vec.end());  // it returns the iterator...
    cout <<"maximum occurance of character " << ch << " is --> "  << *maxOccurance << endl;
    return;
}

int main(){
    string str;
    cout << "Take input for string --> ";
    getline(cin , str);

    // remove special character...
    str = removeSpecialChar(str);
    cout << str << endl;

    // convert upper case to lower case:- 
    str = convertToLowerCase(str);
    cout << str << endl;

    // check for maximum occurance ...
    checkOccurance(str);

    return 0;
}