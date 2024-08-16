#include<stdio.h>

int main(){

    //if-else statement
    int age=18;    
    if(age==18){
        printf("Adult");
    }else{
        printf("Not Adult");
    }

    //else-if statement
    int a=1,b=1;   
    if(a && b){
        printf("AND");
    }
    else if(a || b){
        printf("OR");
    }
    else{
        printf("NOT");
    }

    //ternary Operator
    int num1=9,num2=2;
    int condition=(num1>num2)?1:0;

    //switch statement
    int n=6;
    switch(n){
        case 2:
            printf("You entered 1\n");
            break;
        case 4:
            printf("You entered 2\n");
            break;
        case 6:
            printf("You entered 3\n");
            break;
        case 8:
            printf("You entered 4\n");
            break;
        default:
            printf("Nothing matched");
    }
    return 0;
}