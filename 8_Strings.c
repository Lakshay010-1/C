#include <stdio.h>
#include <string.h>

int mystrlen(char str[]);
void mystrcpy(char target[],char source[]);

int mystrlen(char str[]){
    int i = 0, count;
    char c = str[i];
    while (c != '\0'){
        c = str[i];
        i++;
    }
    count = i - 1;
    return count;
}

void mystrcpy(char target[], char source[]){
    for (int i = 0; i < mystrlen(source); i++){
        target[i] = source[i];
    }
    target[mystrlen(source)] = '\0';
}

int main()
{
    char st[] = "abc"; // Same as doing char st[] = {'a', 'b', 'c', '\0'};

    for (int i = 0; i < 3; i++){
        printf("%c", st[i]);
    }
    printf("\n");

    int i = 0;
    char c = st[i];
    while (c != '\0')
    {
        c = st[i];
        printf("%c",st[i]);
        i++;
    }
    printf("\n");
    printf("%s", st);
    // scanf("%s", st);    //Cant input a sentence
    // gets(st);           //Can input a sentence
    // printf("%s", st);   //Doesn't move the cursor to the next line
    // printf("hey");
    // // puts(st);        //Does move the Cursor to the next line
    // printf("hey");

    // Functions
    char s1[] = "One";
    char s2[] = "Three";
    char s3[] = "Two";
    int length = strlen(s1);
    int value = strcmp(s1, s2);
    strcat(s1, s2); // s1 now contains "OneThree"
    strcpy(s2, s3); // s2 now contains "Two"

    //User-Defined
    char s4[100];
    mystrcpy(s4,s1);;
    printf("Length of s4 is : %d\n ",mystrlen(s4));

    char str[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit ";
    for (int i = 0; i < strlen(str); i++)
    {
       str[i] = str[i] + 1;
    }

    printf("%s", str);
    return 0;
}