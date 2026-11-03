/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
        if(head==null|| head.next==null)
        {
            return null;
        }
        ListNode f=head;
        ListNode s=head;
        while (f.next!=null&& f.next.next!=null)
        {
            s=s.next;
            f=f.next.next;
            if(s==f)
            {
                ListNode st=head;
                while(s!=st)
                {
                    s=s.next;
                    st=st.next;
                   
                }
                return st;

            }
        }
       return null; 
        
    }
     
}