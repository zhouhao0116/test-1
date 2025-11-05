#include<stdio.h>
int main()
{
    float profit,commission=0,totalSalary;
    float basicSalary=500;
    printf("请输入本月所接工程的利润p(元):");
    scanf("%f",&profit);
    if(profit<=1000)
    {
        commission=0;
    }
    else if(profit<=2000)
    {
        commission=profit*0.1;
    }
    else if(profit<=5000)
    {
        commission=profit*0.15;
    }
    else if(profit<=10000)
    {
        commission=profit*0.2;
    }
    else 
    {
        commission=profit*0.25;
    }
    totalSalary=basicSalary+commission;
    printf("员工本月的总薪水为：%2f元\n",totalSalary);
    return 0;
}