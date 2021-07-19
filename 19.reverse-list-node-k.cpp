class Solution {
public:
   ListNode* solve(ListNode* head, int partitionCount, int k){
      if(partitionCount == 0)return head;
      ListNode *newHead = head;
      ListNode* prev = NULL;
      ListNode* temp;
      int x = k;
      while(newHead && x--){
         temp = newHead->next;
         newHead->next = prev;
         prev = newHead;
         newHead = temp;
      }
      head->next = solve(newHead, partitionCount - 1, k);
      return prev;
   }
   int calcLength(ListNode* head){
      int len = 0;
      ListNode* curr = head;
      while(curr){
         len++;
         curr = curr->next;
      }
      return len;
   }
   ListNode* reverseKGroup(ListNode* head, int k) {
      int length = calcLength(head);
      return solve(head, length / k, k);
   }
};
