/*   sorted list...
    input:- 1-> 2-> 2-> 2-> 3-> 3-> 4-> NULL
    output:- 1-> 2-> 3-> 4-> NULL
*/

#include<bits/stdc++.h>
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

void display(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }

    return;
}

Node* removeDuplicate(Node* &head){
    if(head == NULL || head -> next == NULL){
        return head;
    }

    Node* temp, *curr;
    temp = head;
    curr = head -> next;

    while(curr != NULL){
        if(temp -> data == curr->data){
            Node* nodeToDelete = curr;
            curr = curr -> next;
            temp -> next = curr;
            delete (nodeToDelete);
        }
        else{
            temp = curr;
            curr = curr -> next;
        }
    }

    return head;
}

int main(){
    Node* node1 = new Node(1);
    Node* head = node1;

    // creating a linklist...
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 3);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 4);

    cout << "Before: " << endl;
    display(head);


    cout << "\nAfter removal of duplicate elements : " << endl;
    head = removeDuplicate(head);
    display(head);
    return 0;
}