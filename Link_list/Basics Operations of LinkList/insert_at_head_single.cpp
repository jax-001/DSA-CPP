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

void insertAtHead(node* &head, int d){
    node* temp = new node(d);
    temp -> next = head;
    head = temp;

    return;
}

void print(node* &head){
    node* temp = head;

    while(temp != NULL){
        cout << temp->data << endl;
        temp = temp -> next;
    }
    return;
}

int main(){

    node* node1 = new node(10);
    node* head = node1;
    insertAtHead(head, 11);
    print(head);
    
    return  0;
}