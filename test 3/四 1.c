#include<stdio.h>
int main()
{
    char gender;
    float weight;
    int bloodVolume;
    printf("请输入性别(m表示男性,f表示女性):");
    scanf("%c",&gender);
    printf("请输入体重(公斤):");
    scanf("%f",&weight);
    if (gender=='m')
    {
        if(weight>120)
        {
            bloodVolume=200;
        }
        else
        {
            bloodVolume=180;
        }
    }
    else if(gender=='f')
    {
        if(weight>100)
        {
            bloodVolume=150;
        }
        else
        {
            bloodVolume=120;
        }
    }
    else
    {
        printf("性别输入错误！\n");
        return 1;
    }
    printf("输血量为：%d毫升\n",bloodVolume);
    return 0;
}