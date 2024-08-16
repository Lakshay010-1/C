#include<stdio.h>

int main(){
    int a=42;
    // "*" is a value-at address Operator and "&" is a address-of Operator
    int *ptr = &a ;
    int **ptr2 = &ptr;

    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", *ptr);
    printf("The address of a is %p\n", **(&ptr));

    return 0;
}