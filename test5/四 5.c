#include <stdio.h>
#define N 3 
int main() 
{
    int magic[N][N] = {0};  
    int i, j, k = 1;
    i = 0;
    j = N / 2;
    magic[i][j] = k++;
    while (k <= N * N) 
    {
        int next_i = (i - 1 + N) % N;
        int next_j = (j + 1) % N;
        if (magic[next_i][next_j] == 0) 
        {
            i = next_i;
            j = next_j;
        } 
        else 
        {
            i = (i + 1) % N;
        }
        magic[i][j] = k++;
    }
    printf("3 阶魔方阵：\n");
    for (i = 0; i < N; i++) 
    {
        for (j = 0; j < N; j++) 
        {
            printf("%4d", magic[i][j]);
        }
        printf("\n");
    }
    return 0;
}