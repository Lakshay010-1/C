#include <stdio.h>

void reverse(int arr[],int n);
void printArr(int arr[],int n);

void reverse(int arr[], int n){
   for (int i = 0; i < n/2; i++){
    int temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
   }   
}

void printArr(int a[], int n){
    for (int i = 0; i < n; i++){
       printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    //1d Array
    int marks[5];

    printf("Enter marks of 5 students\n");

    for (int i = 0; i < 5; i++){
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++){
        printf("The value of marks at index %d is %d\n", i, marks[i]);
    }

    //Pointer Arithmetic Using Integer Pointer
    int score[] = {12, 34, 53, 66};
    int *ptr = score; // Same as int* ptr = &score[0];
    for (int i = 0; i < 4; i++){
        printf("The marks at index %d is %d\n", i, *ptr);
        ptr++;
    }

    //2d Array
    int arr[3][2];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            printf("Enter the value of arr[%d][%d]\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            printf("The value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
        }
    }

    reverse(marks,5);
    printArr(marks,5);

    //3D array
    int arr3[2][3][4];

    // Initializing the 3D array
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 4; ++k) {
                arr3[i][j][k] = i + j + k;
            }
        }
    }

    // Accessing elements of the 3D array
    printf("Elements of the 3D array:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 4; ++k) {
                printf("arr[%d][%d][%d] = %d\n", i, j, k, arr3[i][j][k]);
            }
        }
    }



    return 0;
}