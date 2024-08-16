#include<stdio.h>

int factorial(int);
int fibonacci(int);


int factorial(int n){ 
    if(n == 1 || n == 0){ // Base condition
        return 1;
    }
    // Factorial(n) = Factorial(n-1) X n
    return n * factorial(n-1);
}

int fibonacci(int n){
    if(n == 1 || n==2){
        return n-1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int num=5;
    printf("The factorial of %d is %d", num, factorial(num));
    printf("Element at %d in Fibonacci Series is %d\n",num,fibonacci(num));
    return 0;
}