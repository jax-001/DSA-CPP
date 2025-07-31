/*
Given a linked list of 'N' nodes, where each node has an integer value that can be 0, 1, or 2. You need to sort the linked list in non-decreasing order and the return the head of the sorted list.

Example:
Given linked list is 1 -> 0 -> 2 -> 1 -> 2. 
The sorted list for the given linked list will be 0 -> 1 -> 1 -> 2 -> 2.
*/

// https://www.naukri.com/code360/problems/sort-linked-list-of-0s-1s-2s_1071937?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_Lovebabbar31stJan2021


// code...
/*
    Node* sortList(Node *head){
    if(head == NULL || head -> next == NULL){
        return head;
    }
    Node* temp = head;
    int arr[3] = {0};

    while(temp != NULL){
        arr[temp->data] ++;
        temp = temp -> next;
    }
    temp = head;

    for(int i = 0; i < 3 ; i++){
        int count = arr[i];
        while(count > 0){
            temp -> data = i;
            count --;
            temp = temp -> next;
        }
    }

    return head;
}
*/