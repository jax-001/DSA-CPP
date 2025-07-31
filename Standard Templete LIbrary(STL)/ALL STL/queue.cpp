// In quere, its like first come first serve...(FCFS)
#include<iostream>
#include<queue>
using namespace std;
int main(){
    // declaration..
    queue < string > q;
    q.push("Biswajit");
    q.push("Bikash");
    q.push("Soumya");
    q.push("Sonu");
    q.push("Jacky");

    // to check the first element ...
    cout << "The first element is --> " << q.front() << endl;

    // you can't asses to the elemnt by using at() function...
    //cout << "The second element is --> " << q.at(1) << endl;

    // you can asses the 2nd element by simpling removing the 1st one..
    q.pop();   // removes the 1st element...
    cout << "The first element is --> " << q.front() << endl;

    // size of the queue..
    cout << "The size of the queue after pop is --> " << q.size() << endl;

    // empty or not
    cout << "Empty or not --> " << q.empty() << endl;

    // to print a queue or stack we have to do the following...
    cout << "Print the queue --> " << endl;
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}