/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//function revereses linked list
struct ListNode* reverseList(struct ListNode* curr)
 {
   //initializes prev pointer
    struct ListNode* prev = NULL;
//while loop
    while (curr) //continues until curr pointer is NULL
    //curr is current node in list during traversing of list
    {
      //set temp pointer of current node to point to next node 
        struct ListNode* temp = curr->next;
        curr->next = prev; //set current node next pointer to previous node
        prev = curr; //move previous pointer to current node
        curr = temp; //curent pointer to the next node in list which was stored as temp
    }

    return prev;//previous pointer as new head of reversed list
}
