/**
 *  main.c
 *  @date July-05-2022
 *  @brief practice using qsort and function pointer.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Print(int *A, int *size){
    int *temp = (int*)malloc(*size*sizeof(int));
    temp = A;
    printf("2. Address = %d\n", &A);
    printf("3. Address = %d\n", temp);
    for(int i = 0; i < *size; i++){
        printf("%d ", temp[i]);
    }
    printf("\n");
}
int compare(const void *a, const void *b){
    return ( *(int*)a - *(int*)b );
}

int main(){
    int i, A[] = {5, 3, 2, 4, 6, -23, -11, -3, 32};
    int size = sizeof(A)/sizeof(int);
    printf("1. Address = %d\n", &A);
    Print(&A, &size);
    qsort(A, size, sizeof(int), compare);
    for(i = 0; i < size; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}
