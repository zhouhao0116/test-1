#include<stdio.h>
int main()
{
    int num,temp,dight1,dight2,dight3,dight4,dight5,count=0;
    printf("请输入一个不多于5位的正整数");
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        temp/=10;
        count++;
    }
    switch(count)
    {
        case 1:
            dight1=num;
            printf("它是1位数\n");
            printf("每一位数字：%d\n",dight1);
            printf("逆序：%d\n",dight1);
            break;
        case 2:
            dight1=num/10;
            dight2=num%10;
            printf("它是2位数\n");
            printf("每一位数字：%d,%d\n",dight1,dight2);
            printf("逆序：%d%d\n",dight2,dight1);
            break;
        case 3:
            dight1=num/100;
            dight2=(num/10)%10;
            dight3=num%10;
            printf("它是3位数\n");
            printf("每一位数字：%d,%d,%d\n",dight1,dight2,dight3);
            printf("逆序：%d%d%d\n",dight3,dight2,dight1);
            break;
        case 4:
            dight1=num/1000;
            dight2=(num/100)%10;
            dight3=(num/10)%10;
            dight4=num%10;
            printf("它是4位数\n");
            printf("每一位数字：%d,%d,%d,%d\n",dight1,dight2,dight3,dight4);
            printf("逆序：%d%d%d%d\n",dight4,dight3,dight2,dight1);
            break;
        case 5:
            dight1=num/10000;
            dight2=(num/1000)%10;
            dight3=(num/100)%10;
            dight4=(num/10)%10;
            dight5=num%10;
            printf("它是5位数\n");
            printf("每一位数字：%d,%d,%d,%d,%d\n",dight1,dight2,dight3,dight4,dight5);
            printf("逆序：%d%d%d%d%d\n",dight5,dight4,dight3,dight2,dight1);
            break;
        default:
            printf("输入不符合要求！\n");
    }
    return 0;
}