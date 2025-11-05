#include<stdio.h>
int main()
{
    int num,dight1,dight2,dight3;
    printf("输入的不是三位数!\n");
    scanf("%d",&num);
    if(num<100 || num>999)
    {
        printf("输入的不是三位数!\n");
        return 0;
    }
    dight1=num/100;
    dight2=(num/10)%10;
    dight3=num%10;
    if(dight1*dight1*dight1+dight2*dight2*dight2+dight3*dight3*dight3==num)
    {
        printf("%d是水仙花数\n",num);
    }
    else
    {
        printf("%d不是水仙花数\n",num);
    }
    return 0;
}