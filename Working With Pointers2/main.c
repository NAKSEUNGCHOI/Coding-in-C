#include <stdio.h>
#include <stdlib.h>

void SumOfElements(int *A, int *size){
    int i, sum = 0;
    //printf("%d\n", sizeof(A));
    for(i = 0; i < *size; i++){
        A[i] = 2 * A[i];
    }
}

int main(){
    printf("An example of passing an array as a function argument.\n");
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A) / sizeof(A[0]);
    SumOfElements(&A[0], &size);
    for(int i = 0; i < size; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("----------------------------------------------------------------------------\n");
    printf("----------------------------------------------------------------------------\n");
    printf("The size of the array should be passed as an argument because\n");
    printf("function argument takes and reads the array as a pointer.\n");
    printf("This means that it only passes the address of the first element of the array\n");
    printf("So, we can't really use \"sizeof\" in functions to find the real size of the array.\n");
    printf("----------------------------------------------------------------------------\n");
    printf("----------------------------------------------------------------------------\n");
}
