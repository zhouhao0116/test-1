#include<stdio.h>
void findNumbers()
{
    for(int num=10;num<=99;num++)
    {
        if(num%3==0 && (num/10==5 || num%10==5))
        {
            printf("%d",num);
        }
    }
}
int main()
{
    printf("符合条件的两位数有：");
    findNumbers();
    printf("\n");
    return 0;
}