#include<stdio.h>
int main()
{
    int remaining=1;
    for(int i=9;i>=1;i--)
    {
        remaining=(remaining+1)*2;
    }
    printf("小明妈妈总共买了%d块巧克力。\n",remaining);
    return 0;
}