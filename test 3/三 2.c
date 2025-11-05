#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    if(x<0) y=x-3;
    else if(x>0) y=x+3;
    else y=0;
    printf("y=%d\n",y);
    return 0;
}