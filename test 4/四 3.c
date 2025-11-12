#include<stdio.h>
int main()
{
    double stranger_give=100000.0;
    double rich_give=0.01;
    double total_stranger=0.0;
    double total_rich=0.0;
    for(int i=1;i<=30;i++)
    {
        total_stranger+=stranger_give;
        total_rich+=rich_give;
        rich_give*=2;
    }
    printf("陌生人给百万富翁的总钱数:%.2f元\n",total_stranger);
    printf("百万富翁给陌生人的总钱数:%.2f元\n",total_rich);
    return 0;
}