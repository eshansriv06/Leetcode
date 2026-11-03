class Solution {
public:
    ListNode* partition(ListNode* head, int x) {

        ListNode* BeforeHead = new ListNode(0);
        ListNode* AfterHead = new ListNode(0);

        ListNode* small = BeforeHead;
        ListNode* large = AfterHead;

        ListNode* curr = head;

        while (curr != NULL)
        {
            if (curr->val < x)
            {
                small->next = curr;
                small = small->next;
            }
            else
            {
                large->next = curr;
                large = large->next;
            }

            curr = curr->next;
        }

        
        small->next = AfterHead->next;

   
        large->next = NULL;

        return BeforeHead->next;
    }
};