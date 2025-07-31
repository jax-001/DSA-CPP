#include<iostream>
#include<queue>     // same as queue...
using namespace std;
int main(){

    /*
    It is same as the queue but the difference is, suppose you add values to the queue when you pop elements then the greatest 
    element(default) will pop out, in one line the queue is arranged in decending order by itself...
    you can arrange it to assending order also, and the minimum value will pop out...
    */

   // declaration...
   priority_queue < int > maxi ;    // dafault max heap...

   // to declare min heap...
   //syntax:- priority_queue < data_type, vector<data_type>, greater<data_type> > name;
   priority_queue < int, vector<int>, greater<int> > mini; 

   // data enter... for max heap...
   maxi.push(1);
   maxi.push(5);
   maxi.push(2);
   maxi.push(4);

    // we can also know the size...
    cout << "The size of the max heap is: " << maxi.size() << endl;

    // to print...
    while(!maxi.empty()){
        cout << maxi.top() << " " ;
        maxi.pop();
    }cout << endl;

   // data enter...for min heap...
   mini.push(6);
   mini.push(2);
   mini.push(1);
   mini.push(7);

   // size of the min heap...
   cout << "The size of the min heap is: " << mini.size() << endl;

    // to print...
    while(!mini.empty()){
        cout << mini.top() << " " ;
        mini.pop();
    }cout << endl;

    return 0;
}