#include <stdio.h>
int check(int x, int y, int n) 
{
    if (x >= 0 && x <= n-1 && y >= 0 && y <= n-1) 
    {
        return 1;
    } 
    else 
    {
        return 0;
    }
}

int main() 
{
    printf("check(2, 3, 5) = %d\n", check(2, 3, 5));
    printf("check(5, 2, 5) = %d\n", check(5, 2, 5));
    printf("check(-1, 1, 3) = %d\n", check(-1, 1, 3));
    return 0;
}