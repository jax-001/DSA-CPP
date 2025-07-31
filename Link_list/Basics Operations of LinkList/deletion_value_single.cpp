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

void insertElem(Node* &head, int data){
    Node* temp = head;
    Node* newNode = new Node(data);
    if(newNode == NULL){
        cout << "Unable to allocate memory." << endl;
        return;
    }

    while(temp -> next != NULL){
        temp = temp -> next;
    }

    temp -> next = newNode;
    newNode -> next = NULL;
    return;
}

void delete_value(Node* &head, int data){
    Node* temp , *stay ;
    temp = stay = head;

    if(temp -> data == data){
        head = stay = temp -> next;
        temp -> next = NULL;
        delete temp;
        return;
    }
    
    while(temp -> data != data){
        if(temp -> next == NULL){
            cout << endl;
            cout << "Enter a valid value which you want to delete." << endl;
            cout << endl;
            return;
        }
        stay = temp;
        temp = temp->next;
    }  
    
    stay -> next = temp -> next;
    temp -> next = NULL;
    delete temp;
    return;
}

void display(Node* &head){
    Node* temp = head;
    if(head == NULL){
        cout << "The list is empty." << endl;
        return;
    }

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    return;
}


int main(){
    int value;
    Node* node1 = new Node(10);
    Node* head = node1;

    insertElem(head, 11);
    insertElem(head, 12);
    insertElem(head, 13);
    insertElem(head, 14);
    insertElem(head, 15);

    display(head);
    
    cout << endl;
    cout << "Enter the element which you want to delete: " ;
    cin >> value;

    delete_value(head, value);
    display(head);
    return 0;
}