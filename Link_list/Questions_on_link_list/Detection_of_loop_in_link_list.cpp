#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


void createNode(Node* &head, int n);
void display_list(Node* &head);
Node* floydDetectLoop(Node* head);
Node* getStartNode(Node* head);
bool detectLoop(Node* head);
void removeLoop(Node* head);


int main(){
    int n = 5;
    Node* head = new Node(10);
    createNode(head, n);


    Node* intersect =  getStartNode(head);

    cout << "Loop is present at loop: " << intersect -> data << endl;

    // detection of loops in the linkList...
    bool flag = detectLoop(head);
    if(flag){
        cout << "There is a loop present in the linkList."<< endl;
    }
    else{
        cout << "There is no loop present in the linklist." << endl;
    }
    

    // remove loop...
    removeLoop(head);

    cout << "After removal of the loop the list becomes: " << endl;
    display_list(head);

}

void createNode(Node* &head, int n){
    if(n == 1){
        return;
    }
    int data;
    Node* temp, *stay;

    stay = head;
    for(int i = 1 ; i <= n ; i++){
        cout << "Enter the data for node " << i << ":- " ;
        cin >> data;
        temp = new Node(data);
        stay -> next = temp;
        stay = stay -> next;
    }

    // creating a loop in the link list..
    temp -> next = head -> next;

    return;
}


/* method 1:- detection using map. */
   //space complexcity:- O(n)
   // time complexity:- best case:- O(1) , worst case = O(n)

bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }

    map < Node*, bool> visited;
    Node* temp = head;
    while(temp != NULL){
        if(visited[temp] == true){
            // cout << "Present on element " << temp -> data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;
    }

    return false;
}


/* method 2:- using floyd cycle detection algorithm (slow, fast)*/
// space complexity:- O(1)
// time complexity:- worst case:- O(n) , best case:- O(1)
Node* floydDetectLoop(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next; 
        }

        slow = slow -> next;
        if(slow == fast){
            //cout << "Present at : " << slow -> data << endl;
            return slow;
        }
    }

    return head;
}

// to find the point where the loop starts...
Node* getStartNode(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;
    
    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }

    return slow;
}


void display_list(Node* &head){
    Node* temp = head;
    if(head == NULL){
        cout << "List is empty." << endl;
    }

    while(temp != NULL){
        cout << temp->data << "-> ";
        temp = temp -> next;
    }

    return;
}


void removeLoop(Node* head){
    if(head == NULL){
        return;
    }

    Node* startofLoop = getStartNode(head);

    Node* temp = startofLoop;
    while(temp -> next != startofLoop){
        temp = temp -> next;
    }

    temp -> next = NULL;
}
