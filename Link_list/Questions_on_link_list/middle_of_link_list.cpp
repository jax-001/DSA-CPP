//  https://www.naukri.com/code360/problems/middle-of-linked-list_973250?source=youtube&campaign=Lovebabbarcodestudio_24thJan&leftPanelTabValue=SUBMISSION&customSource=studio_nav

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/



/*    // basic solution....
Node *findMiddle(Node *head) {
    int size = 0;
    Node* temp = head;
    while(temp != NULL){
        size++;
        temp = temp -> next;
    }

    int mid;
    if(size&1){
        mid = (size / 2) + 1;
    }
    else{
        mid = (size / 2) + 1;
    }
    temp = head;
    int cnt = 1;
    while(cnt < mid){
        temp = temp -> next;
        cnt++;
    }

    return temp;
}
*/


// optimised solution...pro and noob appraoch...
#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void createList(Node* &head, int data) {
    Node* newNode = new Node(data);
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void display(Node* &head) {
    if (head == NULL) {
        cout << "The list is empty." << endl;
        return;
    }
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int findMid(Node* &head) {
    if (head == NULL) {
        return -999;   // special value for empty list...
    }
    Node* fast = head;
    Node* slow = head;

    // Fast pointer moves two steps while slow moves one step
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->data;
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;

    createList(head, 11);
    createList(head, 12);
    createList(head, 13);
    createList(head, 14);
    createList(head, 15);

    display(head);
    int mid = findMid(head);

    if (mid == -999) {
        cout << "Empty list." << endl;
    } else {
        cout << "The mid element is : " << mid << endl;
    }

    return 0;
}


