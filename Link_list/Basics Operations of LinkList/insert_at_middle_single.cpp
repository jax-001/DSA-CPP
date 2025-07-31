#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int data){
        this -> data = data;
        this ->next = NULL;
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

void insertAtPosition(Node* &head , int pos, int data){
    Node* temp = head;
    Node* newNode = new Node(data);
    int cnt = 1;

    if(pos <= 0 && pos > 7) {
        cout << "Enter a valid position. Thank you..." << endl;
        return;
    }

    if(pos > 1){
        while(cnt < pos - 1){
            temp = temp -> next;
            cnt++;
        }
        
        newNode -> next = temp -> next;
        temp -> next = newNode;
        temp = newNode = head;
    }

    else if(pos == 1){
        newNode -> next = head;
        head = newNode;
    }
    return;
}

void display(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }

    return;
}

int main(){
    int pos;
    Node* node1 = new Node(10);
    Node* head = node1;

    cout << "Enter the position where you want to insert: ";
    cin >> pos;

    // creating a linklist...
    insertAtEnd(head, 11);
    insertAtEnd(head, 12);
    insertAtEnd(head, 13);
    insertAtEnd(head, 14);
    insertAtEnd(head, 15);

    insertAtPosition(head, pos, 99);
    display(head);
    //insertAtPosition(head, );
    return 0;
}