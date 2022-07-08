/**
 *  main.c
 *  @brief Middle of the linked list.
 */

#include <stdio.h>
#include <stdlib.h>

struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* temp = head;
    int result = 0;
    while(temp){
        result += 1;
        temp = temp->next;
        //printf("%d ", result);
    }
    result = (result/2);
    //printf("%d", result);
    for(int i = 0; i < result; i++){
        head = head->next;
    }
    return head;
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
