#include<stdio.h>
#include<string.h>
void countRepeatedChars(char str[])
{
    int count[256]={0};
    int len=strlen(str);
    for (int i=0;i<len;i++)
    {
        count[(unsigned char)str[i]]++;
    }
    printf("重复的字符及其次数：\n");
    for(int i=0;i<256;i++)
    {
        if(count[i]>=2)
        {
            printf("字符'%c':出现%d次\n",(char)i,count[i]);
        }
    }
}
int main()
{
    char input[100];
    printf("请输入一个字符串:");
    gets(input);
    countRepeatedChars(input);
    return 0;
}