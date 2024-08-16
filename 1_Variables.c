#include<stdio.h>

int main(){

    //Data types
    int a=70;   //Variable declaration and initialization
    float b;
    char c;
    short d;
    double e;
    long f;

    //Taking input from the user
    // "%" are format specifiers like %d,%f,%c,%s,etc. and  "&" is a Address-of Operator like &var1,&var2,etc.
    // printf("Enter value for a : \n");   
    // scanf("%d",&a);
    // printf("Enter value for b : \n");
    // scanf("%f",&b);
    // printf("Enter value for c : \n");
    // scanf(" %c",&c);
    // printf("Enter value for d : \n");
    // scanf("%hd",&d);
    // printf("Enter value for e : \n");
    // scanf("%lf",&e); 
    // printf("Enter value for f : \n");
    // scanf("%lld",&f);

    //sizeof operator return "how much memory does mentioned data type takes"...
    printf("Value of a is : %d\n",a);
    printf("sizeof char is : %zu bytes \n",sizeof(c));
    printf("sizeof short is : %zu bytes \n",sizeof(d));
    printf("sizeof int is : %zu bytes \n",sizeof(a));
    printf("sizeof float is : %zu bytes \n",sizeof(b));
    printf("sizeof long is : %zu bytes \n",sizeof(f));
    printf("sizeof double is : %zu bytes \n",sizeof(e));

    //escape sequence
    char ch1='\n';  //  escape sequence are single characters.ie"\n","\t",etc.
    printf(" a \n b \n"); // represents a new line
    printf("\tch1");  // represents tab space
    printf(" \" ch1");  // represents double quote symbol in a string
    printf(" \' ch1");  // represents single quote symbol in a string
    printf(" \\ ch1");  // represents backslash symbol in a string
    printf(" \\n ch1");  // represents backslash symbol with words in a string

    return 0;
}
