#include<iostream>
using namespace std;

class node{

    public:
        int data;
        node* next;

    node(int data){                 ///..constructor..///
        this -> data = data;
        this -> next = NULL;
    }
};

int main(){

    node* node1 = new node(10);
    cout << "Data is : " << node1 ->data << endl;
    cout << "Next is: " << node1 -> next << endl;

    return  0;
}