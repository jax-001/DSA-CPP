#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    vector <int > v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    // binary_search returns values in boolean form...
    cout <<"Finding 5 --> " << binary_search(v.begin(), v.end(), 5) << endl;
    cout <<"Finding 2 --> " << binary_search(v.begin(), v.end(), 2) << endl;

    // lower_bound function returns the iterator which is not less than the key value...i.e. (key <= element)
    cout << "Lower_bound --> " << lower_bound(v.begin(), v.end(), 4) - v.begin() << endl;
    // upper_bound function returns the iterator which is greater than the key value (key < element) 
    cout << "Upper_bound --> " << upper_bound(v.begin(), v.end(), 1) - v.begin() << endl; 

    // lets search 3, taking lower_bound and upper_bound...
    // here see the difference...
    // for lowerbound (3<=3), so it returns iterator 2
    // for upperbound (3!>3) so it moves forward and check (4>3), and returns the iterator of 4...
    cout << "Lower_bound(3) --> " << lower_bound(v.begin(), v.end(), 3) - v.begin() << endl;
    cout << "Upper bound(3) --> " << upper_bound(v.begin(), v.end(), 3) - v.begin() << endl; 

    // you can also determine min and max using algorithm...
    int a = 2;
    int b = 3;
    cout << "max --> " << max(a,b) << endl;
    cout << "min --> " << min(a,b) << endl;

    // swap ()    you can use swap in any container...
    swap(a,b);
    cout << "After swap" << endl;
    cout << "a is --> " << a << endl;
    cout << "b is --> " << b << endl;


    // to reverse 
    string s = "abcd" ;
    cout << "Before reverse: " << s << endl;
    reverse(s.begin(), s.end());
    cout <<"After reverse: " <<  s << endl;

    // you can also reverse a vector...
    cout << "Before reverse --> " << endl;
    for(auto i:v){
        cout << i << " " ;
    }cout << endl;
    reverse(v.begin(), v.end());
    cout << "After reverse --> " << endl;
    for(auto i:v){
        cout << i << " ";
    }cout << endl;


    // rotate function...
    cout << "Before rotate --> " << endl;
    for(auto i : v){
        cout << i << " " ;
    }cout << endl;
    rotate(v.begin(), v.begin() + 2 , v.end());
    cout<< "After rotate --> " << endl;
    for(auto i : v){
        cout << i << " " ;
    }cout << endl;


    // sort functin...
    sort(v.begin(), v.end());
    cout << "After sorting () --> " << endl;
    for(auto i:v){
        cout << i << " " ;
    }
    // sorting function works on intro sort...
    // intro sort = heap sort + quick sort + insertion sort
    return 0;
}