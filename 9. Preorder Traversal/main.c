/**
 *  main.c
 *  @brief Preorder Traversal
 *  1. create an malloced array with a size of 10000 (unsure why 10000.)
 *  2. call a function called preorder_result
 *  3. This function takes three arguments: struct Node* root, int *temp, int *index
 *  4. add root->val into temp[(*index)++]
 *  5. call the function recursively in a for loop with a size of numChildren from struct Node.
 *  6. the function should take three arguments same as step 3.
 *  7. the major difference is root->children[i] instead of struct Node* root.
 *  8. Still figuring out why the meaning of root->children[i].
 */

#include <stdio.h>
#include <stdlib.h>
struct Node{
    int val;
    int numChildren;
    struct Node** children;
};

void preorder_result(struct Node* root, int *temp, int *index){
    if(!root) return;
    temp[(*index)++] = root->val;
    for(int i = 0; i < root->numChildren; i++){
        preorder_result(root->children[i], temp, index);
    }
}
int* preorder(struct Node* root, int* returnSize) {
    int index = 0;
    int *temp = (int*)malloc(10000*sizeof(int));
    preorder_result(root, temp, &index);
    *returnSize = index;
    return temp;
}

