/*
    input:- 3 -> 5 -> 7 -> null
    output:- 7 -> 5 -> 3 -> null
*/

#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void displayList(Node* &head){
    if(head ==  NULL){
        cout << "The list is empty." << endl;
        return;
    }
    else{
        Node* temp = head;
        while(temp !=  NULL){
            cout << temp -> data << "-> " ;
            temp = temp -> next;
        }
        cout << "NULL" << endl;
    }
    return;
}

void createList(Node* &head, int data){
    Node* newNode = new Node(data);
    Node* temp = head;

    if(newNode == NULL){
        cout << "unable to allocate memory." << endl;
        return;
    }

    while(temp -> next != NULL){
        temp = temp -> next;
    }

    temp -> next = newNode;
    newNode -> next = NULL;
    temp = newNode = head;
    return;
}

void reverseLinkList(Node* &head){
    Node* prev, *curr, *forward;
    curr = forward = head;
    prev = NULL;

    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }

    head = prev;
}

int main(){

    Node* node1 = new Node(10);
    Node* head = node1;

    createList(head, 11);
    createList(head, 12);
    createList(head, 13);
    createList(head, 14);
    createList(head, 15);

    cout << "Before reverse the list is: " << endl;
    displayList(head);

    reverseLinkList(head);
    cout << "After reverse the list is: " << endl;
    displayList(head);

    return 0;
}