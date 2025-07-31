#include<iostream>
using namespace std;

class Node{
    
    public:
        int data;
        Node* next;
        Node* prev;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }
};

void insertNodeEnd(Node* &head, int data){
    Node* newNode = new Node(data);
    Node* temp = head;

    while(temp -> next != NULL){
        temp = temp -> next;
    }

    temp -> next = newNode;
    newNode -> prev = temp;
    temp = newNode = head;
    return;
}

void insertNode(Node* &head){
    int pos, data, cnt = 1;
    Node* temp = head;

    cout << "Enter the position in which you want to insert: " ;
    cin >> pos;
    cout << "Enter the data which you want to insert: " ;
    cin >> data;
    Node* newNode = new Node(data);

    if(pos == 1){
        temp -> prev = newNode;
        newNode -> next = temp;
        temp = head = newNode;
    }

    else{
        while(cnt < pos - 1){
            temp = temp -> next;
            cnt ++;
        }

        newNode -> next = temp -> next;
        newNode -> prev = temp;
        temp -> next -> prev = newNode;
        temp -> next = newNode;
    }
    return;
}

void deleteNode(Node* &head){
    int pos, cnt = 1;
    cout << "Enter the position which node you want to delete: " ;
    cin >> pos;

    Node* temp, *stay;
    temp = stay = head;

    if(pos == 1){
        head = stay = temp -> next;
        stay -> prev = NULL;
        temp -> next = NULL;
        delete temp;
    }

    else{
        while(cnt < pos){
            stay = temp;
            temp = temp -> next;
            cnt ++;
        }

        stay -> next = temp -> next;
        temp -> next -> prev = stay;
        temp -> next = NULL;
        temp -> prev = NULL;

        delete temp;
    }
    return;
}

void display(Node* &head){
    Node* temp = head;
    while(temp -> next != NULL){
        cout << temp -> data << " " ;
        temp = temp -> next;
    }
    cout << endl;
    return;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;

    insertNodeEnd(head, 11);
    insertNodeEnd(head, 12);
    insertNodeEnd(head, 13);
    insertNodeEnd(head, 14);
    insertNodeEnd(head, 15);
    insertNodeEnd(head, 16);

    int mark;

    cout << endl << endl;
    cout << "1: Display all the data." << endl;
    cout << "2: Insert Node." << endl;
    cout << "3: Delete Node." << endl;
    cout << "Enter from above which you want to perform: ";
    cin >> mark;

    cout << endl << endl;

    switch(mark){

        case 1:
            display(head);
            break;

        case 2:
            insertNode(head);
            display(head);
            break;

        case 3:
            deleteNode(head);
            display(head);
            break;
        
        default:
            cout << "Enter a valid operation." << endl;

    }

    return 0;
}