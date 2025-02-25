/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 //fucntion to remove alll nodes equal to the given value
struct ListNode* removeElements(struct ListNode* head, int val) {
    //dummy node that always points to header
    struct ListNode *temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    temp->next = head;//insers dummy before actual header

    struct ListNode *curr = temp; //starting point
    while(curr->next != NULL ){ //loop cointinues as long as pointer of current next pointer is not NULL
        if(curr->next->val == val) //next pointer of current node is == val then
            curr->next = curr->next->next; //next pointer of current node is now changed to skip the curr.next node
        else curr = curr->next; // continues traversing
    }
    return temp->next; //if header was modified new header is returned
}
