#include<stdio.h>
#include<string.h>

struct employee
{
int code; // This declares a new user defined data type!
float salary;
char name[10];
}; 

void show(struct employee e); // function prototype

void show(struct employee e){
    printf("Code is %d\nSalary is %f\nName is %s\n", e.code, e.salary, e.name);
}


int main(){
    struct employee e1;
    printf("Enter the value of code\n");
    scanf("%d", &e1.code);

    printf("Enter the value of salary\n");
    scanf("%f", &e1.salary);

    printf("Enter the value of name\n");
    scanf("%s", &e1.name);
    printf("%d %f %s\n", e1.code, e1.salary, e1.name);

    // an array of structures
    struct employee media[100]; 
    media[0].code = 100;
    media[1].code = 77;
    struct employee e2 = {100, 71.22, "xyz"};
    show(e2);


    // Pointer Structure
    struct employee *ptr;
    ptr = &e1;
    printf("%d", ptr->code); // Exactly same as  (*ptr).code

    //typedef
    typedef struct employee emp;
    emp e3;
    emp* ptr1 = &e3;
    e3.code = 4511;
    strcpy(e3.name, "abcd");
    e3.salary = 54.44;

    printf("%d %f %s\n", e3.code, e3.salary, e3.name);
    printf("%d %f %s\n", ptr1->code, ptr1->salary, ptr1->name);

    return 0;
}