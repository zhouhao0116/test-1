#include<stdio.h>
int main()
{
    double height=100;
    double total_distance=100;
    int i;
    for(i=2;i<=10;i++)
    {
        height/=2;
        total_distance+=2*height;
    }
    printf("第10次落地时,共经过%.2f米\n",total_distance);
    printf("第10次反弹的高度为%.2f米\n",height);
    return 0;
}