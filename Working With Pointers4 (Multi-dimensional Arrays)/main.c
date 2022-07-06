#include <stdio.h>
#include <stdlib.h>
void twoDimensional(){
    int b[2][3];
    b[0][0] = 2;
    b[0][1] = 3;
    b[0][2] = 6;
    b[1][0] = 4;
    b[1][1] = 5;
    b[1][2] = 8;
    int (*p)[3] = b;
    printf("----------------------------------------------------------------------------\n");
    printf("----------------------------------------------------------------------------\n");
    printf("%d\n", b);              // = &b
    printf("%d\n", *b);             // = b[0][0]; same as above
    printf("%d\n", b+1);            // next row. It pointers to the address of b[1][0]
    printf("%d\n", *(b+1));         // same as above
    printf("%d\n", *(b+1)+2);       //  it points to the address of b[1][2]
    printf("%d\n", *(*b+1));        // b[0][1] = 3
    printf("%d\n", *(*(b+1)+2));    // b[1][2] = 8
    printf("This is the equation: \n");
    printf("b[i][j] = *(b[i]=j) or\n");
    printf("b[i][j] = *(*(b+i)+j)\n");
    printf("----------------------------------------------------------------------------\n");
    printf("----------------------------------------------------------------------------\n");
}
int main(){
    twoDimensional();
}
