#include<stdio.h>
#define PI
{
    double r,C,area;
    printf("请输入圆的半径：");
    scanf("%1f",&r);
    C=2*PI*r;
    area=PI*r*r;
    printf("半径=%3f\n",r);
    printf("周长=%3f\n",C);
    printf("面积=%3f\n",area);
    return 0;
}