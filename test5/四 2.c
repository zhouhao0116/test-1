#include<stdio.h>
int main()
{
    char c;
    int letters=0,spaces=0,dights=0,others=0;
    printf("请输入一行字符:\n");
    while((c=getchar())!='\n')
    {
        if((c>='a' && c<='z')||(c>='A' && c<='Z'))
        {
            letters++;
        }
        else if(c==' ')
        {
            spaces++;
        }
        else if(c>='0' && c<='9')
        {
            dights++;
        }
        else
        {
            others++;
        }
    }
    printf("英文字母个数：%d\n",letters);
    printf("空格个数:%d\n",spaces);
    printf("数字个数:%d\n",dights );
    printf("其他字符个数：%d\n",others);
    return 0;
}