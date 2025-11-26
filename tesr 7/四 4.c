#include <stdio.h>
int main() 
{
    char str[100];
    char *p = str;

    printf("请输入一行字符串：");
    while ((*p = getchar()) != '\n') {
        p++;
    }
    p--;
    printf("反向显示的字符串：");
    while (p >= str) {
        putchar(*p);
        p--;
    }
    printf("\n");

    return 0;
}