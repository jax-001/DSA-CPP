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

void deleteElem(Node* &head, int pos){

    Node *temp , *flag;
    temp = flag = head;
    int cnt = 1;
    if(pos <= 0 || pos > 6){
        cout << "Enter a valid position !!" << endl;
        return;
    }

    if(pos == 1){
        head = head -> next;
        flag = head;
        temp -> next = NULL;
        delete temp;
        return;
    }

    else{
        while(cnt < pos){
            temp = flag;
            flag = flag -> next;
            cnt++;
        }

        temp -> next = flag -> next;
        flag -> next = NULL;
        delete flag;
        temp = flag = head;
    }

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
    int pos;
    Node* node1 = new Node(10);
    Node* head = node1;

    cout << "Enter the position which you want to delete: ";
    cin >> pos;

    // creating a linklist...
    insertAtEnd(head, 11);
    insertAtEnd(head, 12);
    insertAtEnd(head, 13);
    insertAtEnd(head, 14);
    insertAtEnd(head, 15);

    cout << "Before delete the list is: " << endl;
    display(head);

    cout << endl;
    cout << "After deleting element the list is: " << endl;
    deleteElem(head, pos);
    display(head);
    
    return 0;
}