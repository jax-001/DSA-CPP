// https://www.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1

/*
Input: head: 1 -> 2 -> 1 -> 1 -> 2 -> 1
Output: true
Explanation: The given linked list is 1 -> 2 -> 1 -> 1 -> 2 -> 1 , 
which is a palindrome and Hence, the output is true.


Input: head: 1 -> 2 -> 3 -> 4
Output: false
Explanation: The given linked list is 1 -> 2 -> 3 -> 4, 
which is not a palindrome and Hence, the output is false.
*/




/*

// METHOD 1: TIME COMPLEXITY:- O(n) , SPACE COMPLEXITY:- O(n)


class Solution {
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        vector < int > ans;
        Node* temp = head;
        while(temp != NULL){
            ans.push_back(temp -> data);
            temp = temp -> next;
        }
        
        int n = ans.size() - 1;
        for(int i = 0, j = n ; i < j ; i++, j--){
            if(ans[i] != ans[j]){
                return false;
            }
        }
        
        return true;
    }
};
*/







/*

// METHOD 2: TIME COMPLEXITY:- O(n) , SPACE COMPLEXITY:- O(1)

class Solution {
  private:
    Node* find_middle(Node* head){
        Node* slow = head;
        Node* fast = head -> next;
        
        while(fast != NULL && fast -> next != NULL){
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        
        return slow;
    }
    
    Node* reverse(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        
        while(curr != NULL){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        
        if(head -> next == NULL){
            return true;
        }
        
        // step 1: find middle...
        Node* middle = find_middle(head);
        
        // step 2: reverse from middle...
        Node* temp = middle -> next;
        middle -> next = reverse(temp);
        
        // step 3: compare two half..
        Node* head1 = head;
        Node* head2 = middle -> next;
        while(head2 != NULL){
            if(head1 -> data != head2 -> data){
                return false;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
        
        // step 4: reverse the middle to make it original..
        middle -> next = reverse(temp);
        
        return true;
        
    }
};
*/

