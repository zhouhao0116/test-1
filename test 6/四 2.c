#include<stdio.h>
#include<math.h>
int isPrime(int num)
{
    if(num<=1)
    {
        return 0;
    }
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num;
    printf("请输入一个整数：");
    scanf("%d",&num);
    if(isPrime(num)==1)
    {
        printf("%d是素数\n",num);
    }
    else
    {
        printf("%d不是素数\n",num);
    }
    return 0;
}