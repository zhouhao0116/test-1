#include<stdio.h>
int main()
{
    int num1,num2;
    printf("请输入两个整数：");
    scanf("%d,%d",&num1,&num2);
    int greateastCommonDivisor=gcd(num1,num2);
    int leastCommonMultiple=num1*num2/greateastCommonDivisor;
    printf("%d 和 %d的最大公约数是 %d\n",num1,num2,greateastCommonDivisor);
    printf("%d 和 %d的最小公倍数是 %d\n",num1,num2,leastCommonMultiple);
    return 0;    
}
int gcd(int a,int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return 0;
}