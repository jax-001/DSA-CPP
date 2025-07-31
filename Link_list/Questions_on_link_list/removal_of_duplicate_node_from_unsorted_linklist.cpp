/*   unsorted list...
    input:- 4-> 2-> 5-> 4-> 2-> 2-> NULL
    output:- 4-> 2-> 5-> NULL
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

// using doulbe for loop...
Node* removeDuplicate(Node* &head){
    if(head == NULL || head -> next == NULL){
        return head;
    }

    Node* temp, *curr;
    temp = head;
    curr = head -> next;
}

/*   using map : time complexity:- O(n), space complexity:- O(n)
Node* removeDuplicate(Node* &head){
    if(head == NULL || head -> next == NULL){
        return head;
    }

    map < int, bool > visited;
    Node* temp = head ;
    visited [temp->data] = true;

    while(temp->next != NULL){
        if(visited[temp->next->data] == false){
            visited[temp->next->data] = true;
            temp = temp -> next;
        }
        else{
            Node* deleteNode = temp->next;
            temp -> next = temp->next->next;
            delete (deleteNode);
        }
    }
    return head;
}
*/

int main(){
    Node* node1 = new Node(4);
    Node* head = node1;

    // creating a linklist...
    insertAtEnd(head, 2);
    insertAtEnd(head, 5);
    insertAtEnd(head, 4);
    insertAtEnd(head, 2);
    insertAtEnd(head, 2);

    cout << "Before: " << endl;
    display(head);


    cout << "\nAfter removal of duplicate elements : " << endl;
    head = removeDuplicate(head);
    display(head);
    return 0;
}