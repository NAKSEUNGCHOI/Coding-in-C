/**
 *  main.c
 *  @brief Simple reverse linked list using an iterative method.
 */

#include <stdio.h>
#include <stdlib.h>

struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* prev = NULL;
    struct ListNode* current = head;
    struct ListNode* next = NULL;

    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
