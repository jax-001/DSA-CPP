/*
Problem statement:
You are given two sorted linked lists. You have to merge them to produce a combined sorted linked list. You need to return the head of the final linked list.

Note:
The given linked lists may or may not be null.

For example:
If the first list is: 1 -> 4 -> 5 -> NULL and the second list is: 2 -> 3 -> 5 -> NULL
The final list would be: 1 -> 2 -> 3 -> 4 -> 5 -> 5 -> NULL

constrains: 
1 <= L <= 10^5
1 ≤ data ≤ 10^6 and data != -1
*/


// https://www.naukri.com/code360/problems/merge-two-sorted-linked-lists_800332?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_Lovebabbar31stJan2021&leftPanelTabValue=PROBLEM


/*
    Node<int>* solve(Node<int>* first, Node<int>* second){
    Node<int>* curr1 = first;
    Node<int>* next1 = curr1 -> next;
    Node<int>* curr2 = second;
    Node<int>* next2 = curr2 -> next;

    // edge case...
    if(first -> next == NULL){
        first -> next = second;
        return first;
    }

    while(next1 != NULL && curr2 != NULL){
        
        if( (curr2 -> data <= next1 -> data) && (curr2 -> data >= curr1 -> data) ){
            curr1 -> next = curr2;
            curr2 -> next = next1;

            curr1 = curr2;
            curr2 = next2;
            next2 = (curr2 != NULL) ? curr2->next : NULL;       // edge case...
        }
        else{
            curr1 = next1;
            next1 = next1 -> next;
            
            // edge case...
            if(next1 == NULL){
                curr1 -> next = curr2;
                return first;
            }
        }
    }
    return first;
}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first == NULL){
        return second;
    }
    if(second == NULL){
        return first;
    }

    Node<int>* head;
    if(first -> data <= second -> data){
        head = solve(first, second);
    }
    else{
        head = solve(second, first);
    }

    return head;
}
*/