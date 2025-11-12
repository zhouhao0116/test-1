#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="apple";
    int len=strlen(a);
    int i,j;
    char temp;
    printf("原字符串：%s\n",a);
    for(i=0,j=len-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("逆字符串:%s\n",a);
    return 0;
}