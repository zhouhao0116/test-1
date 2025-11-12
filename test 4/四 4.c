#include<stdio.h>
int isPrime(int n)
{
    if(n<=1)
    {
        return 0;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
void goldbach(int even)
{
    if(even%2!=0)
    {
        printf("%d不是偶数,无法验证哥德巴赫猜想\n",even);
        return;
    }
    for(int i=2;i<=even/2;i++)
    {
        if(isPrime(i) && isPrime(even-i))
        {
            printf("%d=%d+%d\n",even,i,even-i);
            return;
        }
    }
    printf("未找到将%d表示两个素数之和的情况\n",even);
}
int main()
{
    int even;
    printf("请输入一个偶数:");
    scanf("%d,%even");
    goldbach0(even);
    return 0;
}