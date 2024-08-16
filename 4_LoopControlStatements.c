#include<stdio.h>

int main(){
    //while loop
    int i=1;
    while(i<=5){
        printf("Hello World %d\n",i);
        // i = i + 1;
        i++;
    }

    // infinite loop
    // while(1){
    //     printf("Infinity...");
    // }

    //do-while loop
    i = 1;
    do{
       printf("The value of i is %d\n", i);  
       i++;
    } while (i<=5);

    //for loop
     for(int i=1;i<=5;i++){
        printf("The value of i is %d\n",i);
    }

    //break and continue
    int n=0;
    while(n<5){
        if(n==3){
            printf("break");
            break;
        }
        if(n==1){
            printf("continue");
            continue;
        }
        printf("Hello ji %d\n",n);
        n++;
    }
    return 0;
}