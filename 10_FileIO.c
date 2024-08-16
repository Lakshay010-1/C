#include <stdio.h>

int main()
{
    // File Pointer
    //File opening modes in C
    /*
    "r"  -> open for "reading"
    "rb" -> open for "reading in binary"
    "w"  -> open for "writing"  //If the file exists, the content in the file will be overwritten.
    "wb" -> open for "writing in binary"
    "a"  -> open for "append"   //If the file does not exist, it will be created.
    */
    // read
    FILE *ptr;
    ptr = fopen("rtemp.txt", "r");
    if (ptr == NULL)
    {
        printf("The file does not exist sorry! \n");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d \n", num);
        fclose(ptr);
    }

    //append
    FILE *fptr;
    fptr = fopen("wtemp.txt", "a");
    int num = 432;
    fprintf(fptr, "%d", num);
    fclose(fptr);

    //append 
    FILE *aptr;
    aptr = fopen("atemp.txt", "a");
    char c = fgetc(aptr); // used to read a character from file
    printf("%c", c);
    fputc('c', aptr);     //used to write a character in file  

    //EOF
    char ch;
    FILE *eptr;
    eptr = fopen("fileRead.txt", "r");
    while (1){
        ch = fgetc(eptr); 
        printf("%c", ch);
        // when all the content of a file has been read, then break
        if (ch == EOF){
            break;
        }
    }

    return 0;
}