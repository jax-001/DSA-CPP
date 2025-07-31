/*
    // https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1

    Given the head of two singly linked lists num1 and num2 representing two non-negative integers. 
    The task is to return the head of the linked list representing the sum of these two numbers.

    For example, num1 represented by the linked list : 1 -> 9 -> 0, similarly num2 represented by the linked list: 2 -> 5. 
    Sum of these two numbers is represented by 2 -> 1 -> 5.

    Note: There can be leading zeros in the input lists, but there should not be any leading zeros in the output list.

    Examples:
    Input: num1 = 4 - > 5, num2 = 3 -> 4 -> 5
    Output:  3 -> 9 -> 0

    Input: num1 = 0 -> 0 -> 6 -> 3, num2 = 0 -> 7 
    Output: 7 -> 0 
*/

/*
class Solution {
  private:
    Node* reverseList(Node* head1){
        if(head1 == NULL || head1 -> next == NULL){
            return head1;
        }
        Node* prev = NULL;
        Node* curr = head1;
        Node* forward = NULL;
        
        while(curr != NULL){
            forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
        }
        
        return prev;
    }
    void insertAtNode(Node* &ansHead, Node* &ansTail, int digit){
        Node* temp = new Node(digit);
        if(ansHead == NULL){
            ansHead = temp;
            ansTail = temp;
        }
        else{
            ansTail -> next = temp;
            ansTail = temp;
        }
    }
    
    Node* addLinkList(Node* head1, Node* head2){
        int carry = 0;
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        
        while(head1 != NULL || head2 != NULL || carry != 0){
            int sum = carry;
            if(head1 != NULL){
                sum += head1 -> data;
                head1 = head1 -> next;
            }
            if(head2 != NULL){
                sum += head2 -> data;
                head2 = head2 -> next;
            }
            int digit = sum % 10;
            carry = sum / 10;
            insertAtNode(ansHead, ansTail, digit);
        }
        
        return ansHead;
    }
    
  public:
    Node* addTwoLists(Node* num1, Node* num2) {
        if(num1 == NULL) return num2;
        if(num2 == NULL) return num1;
        
        // reverse the linked list...
        num1 = reverseList(num1);
        num2 = reverseList(num2);
        
        // add two linked lists...
        Node* ans = addLinkList(num1, num2);
        
        return reverseList(ans);
    }
}; 
*/
