#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 1025;
    int *p;
    p = &a;
    printf("An example for int pointer.\n");
    printf("address of a: %d\n", p);
    printf("the address + 4 of a: %d\n", p+1);
    printf("p is an integer, so incrementing by 1 increases 4 bytes, which is the size of int: %d\n.",sizeof(int));
    printf("the value of a by dereferencing it: %d\n", *p);
    printf("p* = 10, this changes the value of a: %d\n", *p=10);
    *p = 1025; // back to 1025.
    char *p0;
    p0 = (char*)p; // Typecasting
    printf("size of char is %d byte\n", sizeof(char));
    printf("Address = %d, value = %d\n", p0, *p0);
    printf("Address = %d, value = %d\n", p0+1, *(p0+1));
    printf("The value is zero because no value has been assigned to p0+1.\n");
    // 1025 = 00000000 00000000 00000100 00000001
    printf("------------------------------------------------------------\n");
    printf("------------------------------------------------------------\n");
    printf("An example for char pointer.\n");
    char c[] = "abc";
    printf("Output of char array = %s\n", c);
    printf("Each index = %c %c\n", c[0], c[1]);
    printf("the size of the char array = %d b/c 'abc' has %d bytes.\n", strlen(c), strlen(c));
    printf("------------------------------------------------------------\n");
    printf("------------------------------------------------------------\n");
    char *ptr;
    ptr = c;
    printf("An example of the char array pointer: %c\n", *ptr);
    printf("Address of the first index = %d\n", ptr);
    printf("the address of the second index = %d (ptr+1).", ptr+1);
    printf("The value of the second index (dereferencing) = %c\n", *(ptr+1));
    printf("The value of the third index = %c\n", *(ptr+2));
    printf("To demonstrate, if we do *(ptr+3), this is the result = %c, %d\n", *(ptr+3), *(ptr+3));
    printf("------------------------------------------------------------\n");
    printf("------------------------------------------------------------\n");
    double d = 3.5;
    double *p1 = &d;
    printf("the double value, 'd' = %f\n", d);
    printf("the address of d = %d\n", p1);
    printf("the address of d = %d\n", &d);
    printf("the dereferenced value of p1 = %f\n", *p1);
    printf("the length of double = %d\n", sizeof(d));
    printf("the size of double printing with the pointer, p1 = %d\n", sizeof(*ptr));
    printf("If I just type sizeof(ptr), this is the result = %d.", sizeof(ptr));
    printf(" Hmm, Interesting! \n");
    printf("This refreshes my memory and helps me understand basic pointer better.\n");
    printf("------------------------------------------------------------\n");
    printf("------------------------------------------------------------\n");
    int temp = 1025;
    int *ptr1 = &temp;
    int **ptr2 = &ptr1;
    ptr2 = &ptr1;
    printf("int Pointer to int pointer example.\n");
    printf("**ptr2 = &ptr1 = %d\n", **ptr2);
    printf("ptr = &ptr1 = %d\n", **ptr2);
    printf("*ptr2 = %d\n", *ptr2);
    printf("*ptr2+1 = %d\n", *ptr2+1);
    printf("**ptr2+1 = %d\n", **ptr2+1);










}
