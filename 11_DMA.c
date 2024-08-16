#include<stdio.h>

int main(){
    
    //malloc()
    int n;
    int* mptr;
    scanf("%d", &n);
    mptr = (int*) malloc(n * sizeof(int)); //This creates a array of mentioned data type of size n
    // int arr[n]; // Not allowed in c  ----> Illegal
    mptr[0] = 3;
    printf("%d", mptr[0]);


    //calloc()
    int n;
    int* cptr;
    cptr = (int*) calloc(n, sizeof(int));
    cptr[0] = 3; 
    printf("%d", cptr[0]);


    //free()
    int n;
    int* fptr;
    fptr = (int*) malloc(n * sizeof(int));
    fptr[0] = 3; 
    free(fptr);
    printf("%d", fptr[0]);  //After freeing malloc stores garbage value and calloc stores 0 as value.


    //realloc()
    int neo = 5;
    int* rptr; 
    rptr = (int*) malloc(neo * sizeof(int)); 
    rptr[0] = 3;  
    printf("%d", rptr[0]);
    rptr = (int*) realloc(rptr, 10 * sizeof(int)); 
    printf("%d", rptr[0]);
    return 0;
}