#include<iostream>
using namespace std;

class Node{

    public: 
        int data;
        Node* next;
        Node* prev;

    Node(int data){
        this -> data = data;
        this -> next = this;
        this -> prev = this;
    }

};

void insertNodeEnd(Node* &head, int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head -> prev;   // moving to the last node...

    temp -> next = newNode;
    newNode -> prev = temp;
    newNode -> next = head;
    head -> prev = newNode;

    return;
}

void insertNode(Node* &head){
    int pos, cnt = 1, data;
    cout << "Enter the position in which you want to enter: " ;
    cin >> pos;
    cout << "Enter the data which you want to insert: " ;
    cin >> data;

    Node* newNode = new Node(data);
    Node* temp = head;
    if(newNode == NULL){
        cout << "Unable to allocate memory." << endl;
        return;
    }

    if(pos == 1){
        newNode -> prev = temp -> prev;
        temp -> prev -> next = newNode;
        temp -> prev = newNode;
        newNode -> next = temp;
        temp = head = newNode;
    }

    else{
        while(cnt < pos-1){
            temp = temp -> next;
            cnt++;
        }

        newNode -> prev = temp;
        newNode -> next = temp -> next;
        temp -> next -> prev = newNode;
        temp -> next = newNode;
    }
    
    return;
}

void DeleteNode(Node* &head){
    Node* temp, *stay;
    temp = stay = head;
    int pos, cnt = 1;
    cout << "Enter the position which you want to delete: " ;
    cin >> pos;

    if(pos == 1){
        head = stay = temp -> next;
        temp -> prev -> next = stay;
        stay -> prev = temp -> prev;
        temp -> next = NULL;
        temp -> prev = NULL;
    }

    else{

        while(cnt < pos){
            stay = temp;
            temp = temp -> next;
            cnt ++;
        }

        temp -> next -> prev = stay;
        stay -> next = temp -> next;
        temp -> next = NULL;
        temp -> prev = NULL;

    }
    return;
}

int listLength(Node* &head){
    int cnt = 0;

    Node* temp = head;

    do{
        temp = temp -> next;
        cnt++;
    }
    while(temp != head);

    return cnt;

}

void display(Node* &head){
    Node* temp = head;
    if(head == NULL){
        cout << "List is empty." << endl;
        return;
    }

    do{
        cout << temp -> data << " " ;
        temp = temp -> next;
    }
    while(temp != head);

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

    int mark, flag;
    cout << endl;
    cout << "1. Display the total data." << endl;
    cout << "2. Insert new node. " << endl;
    cout << "3. Delete node." << endl;
    cout << "4. Length of the list." << endl;
    cout << endl;

    while(flag){

        cout << "Enter what you want to perform: ";
        cin >> mark;

        switch(mark){
            
            case 1:
                display(head);
                cout << endl;
                cout << "Are you want to execute again(1/0): " ;
                cin >> flag;
                cout << endl;
                break;

            case 2:
                insertNode(head);
                display(head);
                cout << endl;
                cout << "Are you want to execute again(1/0): " ;
                cin >> flag;
                cout << endl;
                break;

            case 3:
                DeleteNode(head);
                display(head);
                cout << endl;
                cout << "Are you want to execute again(1/0): " ;
                cin >> flag;
                cout << endl;
                break;

            case 4:
                cout << "Total length of the list is: " << listLength(head) << endl;
                cout << endl;
                cout << "Are you want to execute again(1/0): " ;
                cin >> flag;
                cout << endl;
                break;
            
            default:
                cout << "Enter a valid operation." << endl;
                cout << endl;
                cout << "Are you want to execute again(1/0): " ;
                cin >> flag;
                cout << endl;
        }
    }

    return 0;
}