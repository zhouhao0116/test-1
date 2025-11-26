#include <stdio.h>
int main() 
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr_arr[10];
    int **pptr;
    for (int i = 0; i < 10; i++) 
    {
        ptr_arr[i] = &arr[i];
    }
    pptr = ptr_arr;
    printf("一维数组的元素：\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", **(pptr + i));
    }
    printf("\n");
    return 0;
}