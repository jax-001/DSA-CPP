
// https://www.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1

/*
You are given a special linked list with n nodes where each node has two pointers a next pointer that points 
to the next node of the singly linked list, and a random pointer that points to the random node of the linked list.

Construct a copy of this linked list. The copy should consist of the same number of new nodes, where each new node has 
the value corresponding to its original node. Both the next and random pointer of the new nodes should point to new nodes 
in the copied list, such that it also represent the same list state. None of the pointers in the new list should point to 
nodes in the original list.

Return the head of the copied linked list.

NOTE : Original linked list should remain unchanged.
Examples:

Input: head = [[1, 3], [3, 3], [5, NULL], [9, 3]] 
output: head = [[1, 3], [3, 3], [5, NULL], [9, 3]] 
*/




// using unordered_map.     TC: O(N),    SC:  O(N)
/*
    class Solution {
    private:
    void insertAtTail(Node* &newHead, Node* &newTail, int val){
        Node* newNode = new Node(val);
        
        if(newHead == NULL){
            newHead = newNode;
            newTail = newNode;
        }
        else{
            newTail -> next = newNode;
            newTail = newNode;
        }
        
        return;
    }
    public:
    Node *cloneLinkedList(Node *head) {
        // create a copy link list..
        Node* newHead = NULL;
        Node* newTail = NULL;
        Node* temp = head;
        
        while(temp != NULL){
            insertAtTail(newHead, newTail, temp -> data);
            temp = temp -> next;
        }
        
        
        // mapping of old list to new list...
        temp = head;
        Node* temp2 = newHead;
        
        unordered_map < Node*, Node* > oldToNew;
        while(temp != NULL){
            oldToNew.insert({temp, temp2});
            temp = temp -> next;
            temp2 = temp2 -> next;
        }
        
        
        // pointing to the random nodes...
        temp2 = newHead;
        temp = head;
        while(temp != NULL && temp2 != NULL){
            temp2 -> random = oldToNew[temp -> random];
            temp = temp -> next;
            temp2 = temp2 -> next;
        }
        
        return newHead;
    }
};
*/



/*

*/