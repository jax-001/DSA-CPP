// https://www.naukri.com/code360/problems/mergesort-linked-list_630514?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_CodestudioLovebabbar5thfeb

/*

node* findMid(node* head){
    node* slow = head;
    node* fast = head -> next;

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}

node* merge(node* &left, node* &right){
    if(right == NULL){
        return left;
    }
    if(left == NULL){
        return right;
    }

    node* dummy = new node(-1);
    node* temp = dummy;

    while(left != NULL && right != NULL){
        if(left -> data > right -> data){
            temp -> next = right;
            temp = right;
            right = right -> next;
        }
        else{
            temp -> next = left;
            temp = temp -> next;
            left = left -> next;
        }
    }

    while(left != NULL){
        temp -> next = left;
        temp = temp -> next;
        left = left -> next;
    }

    while(right != NULL){
        temp -> next = right;
        temp = temp -> next;
        right = right -> next;
    }

    return (dummy -> next);
}

node* mergeSort(node *head) {
    
    if(head == NULL || head -> next == NULL){
        return head;
    }

    // divide the array into 2 equal halves...
    node* mid = findMid(head);
    node* left = head;
    node* right = mid -> next;
    mid -> next = NULL;

    // apply mergesort on the divided array...
    left = mergeSort(left);
    right = mergeSort(right);

    // merge two link list...
    return (merge(left, right));
}


*/