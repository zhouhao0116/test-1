#include <stdio.h>
#include <string.h>
typedef int (*StrCmpFunc)(const char*, const char*);
int compareStrings(const char *str1, const char *str2) 
{
    return strcmp(str1, str2) == 0;
}

int main() 
{
    char str1[100], str2[100];
    StrCmpFunc cmpFunc = compareStrings;
    printf("请输入第一行字符串：\n");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("请输入第二行字符串：\n");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    if (cmpFunc(str1, str2)) {
        printf("两行字符串一致\n");
    } else {
        printf("两行字符串不一致\n");
    }

    return 0;
}