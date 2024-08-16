#include<stdio.h>

// Function prototype
int sumfn(int a,int b);

// Function definition
int sumfn(int a,int b){
    return a+b;
}

int changeV(int a);  //Call by value
int changeR(int* a); //Call by Reference

int changeV(int a) {
    a = 87; // Misnomer
    return 0;
}

int changeR(int* a) {
    *a = 87; // Misnomer
    return 0;
}

int main(){
    int x=2,y=9;
    int sum=sumfn(x,y);
    printf("sum is %d\n",sum);  // Function call

    int z=70;
    printf("The value of z before call by value function is : %d\n",z);
    changeV(z);  
    printf("The value of z after call by value function is : %d\n",z);

    printf("The value of z before call by reference function is : %d\n",z);
    changeR(&z);  
    printf("The value of z after call by reference function is : %d\n",z);
    
    return 0;
}