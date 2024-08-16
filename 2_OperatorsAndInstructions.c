#include<stdio.h>

int main(){
    
    int a = 3, b = 6;
    float  c = 9.0f, d = 5.0f;

    //Arithmatic Operators
    int sum = a+b;
    int sub = b-c;
    int product = c*d;
    int div= d/a;
    int modulus = a%b;
    // "^" operator is not use for finding exponential power but is used for finding bitwise XOR (exclusive OR).

    //Logical Operators
    int and= 1 && 1 ;
    int or = 0 || 1 ;
    int not =  !1 ;

    //Unary Operators
    int i=0;
    i++;    //Post-increment
    ++i;    //Pre-increment
    i--;    //Post-decrement
    --i;    //Pre-decrement

    //Relational Operators
    int equal= 1==1 ;
    int gr= 2>1;
    int sma= 2<1;
    int noteq= 1!=4;
    int greq= 2>=1;
    int smeq= 2<=1;


    //Type Conversion
    int out1=a+b;       //int +int =int
    int out2=a+c;       //int +float =float
    int out3=c+d;       //float +float =float

    //Type Casting -> (data_type) expression
    int i =(int) 3.5f;
    float f =(float) 3;

    // Precedence and Associativity
     printf("The value is %d", 3*b/2*c + 7*a);
    // 3*b/2*c + 7*a
    // 3*b/2*c + 21
    // 18/2*c + 21
    // 9*c + 21
    // 81 + 21
    // 102
    
    return 0;
}