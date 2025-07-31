#include<iostream>
using namespace std;

class Node{

    public:
        int data ;
        Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtEnd(Node* &head, int data){
    Node* temp = new Node(data);
    Node* stay = head;
    while(head -> next != NULL){
        head = head->next;
    }
    head->next = temp;
    head = stay;
    return;
}

void display(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    return;
}

int main(){

    Node* node1 = new Node(10);

    Node* head = node1;

    cout << "insert at End: " << endl;
    insertAtEnd(head, 11);
    insertAtEnd(head, 12);
    insertAtEnd(head, 13);
    insertAtEnd(head, 14);
    insertAtEnd(head, 15);

    display(head);
    return 0;
}