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

void createList(Node* &head, int data){
    Node* newNode = new Node(data);
    Node* temp = head;

    while(temp -> next != NULL){
        temp = temp -> next;
    }

    temp -> next = newNode;
    return ;
}

void display(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << "-> " ;
        temp = temp -> next;
    }
    cout << "NULL" << endl;
    return;
}

Node* k_Reverse(Node* &head, int k){
    if(head == NULL && k <= 0){
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    int count = 0;


    while(curr != NULL && count < k){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        count ++;
    }

    if(forward != NULL){
        head -> next = k_Reverse(forward , k);
    }

    return prev;
}

int main(){
    int n;
    cout << "Entere the size of the link list: ";
    cin >> n;

    int data;
    cout << "Enter data for 1 node: " ;
    cin >> data;
    Node* node1 = new Node(data);

    Node* head = node1;
    for(int i = 1 ; i< n; i++){
        cout << "Enter data for " << i+1 << " node: " ;
        cin >> data;
        createList(head, data);
    }

    int k;
    cout << "Enter the k group: " ;
    cin >> k;

    cout << "Before reverse the list: " << endl;
    display(head);

    head = k_Reverse(head, k);

    cout << "After reverse the list: " << endl;
    display(head);

    return 0;
}