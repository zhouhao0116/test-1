#include <stdio.h>
int main() {
    int matrix[5][5];
    int i, j;
    int sum_diagonal1 = 0, sum_diagonal2 = 0;
    printf("请输入 5*5 矩阵的元素：\n");
    for (i = 0; i < 5; i++) 
    {
        for (j = 0; j < 5; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < 5; i++) 
    {
        sum_diagonal1 += matrix[i][i];
    }
    for (i = 0; i < 5; i++) 
    {
        sum_diagonal2 += matrix[i][4 - i];
    }
    printf("主对角线元素和：%d\n", sum_diagonal1);
    printf("副对角线元素和：%d\n", sum_diagonal2);
    return 0;
}