#include <stdio.h>
void transpose(int arr[][3], int trans[][2], int rows, int cols) 
{
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) 
        {
            trans[j][i] = arr[i][j];
        }
    }
}

int main() 
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int trans[3][2];
    int rows = 2, cols = 3;
    transpose(arr, trans, rows, cols);
    printf("原二维数组：\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("转置后的二维数组：\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}