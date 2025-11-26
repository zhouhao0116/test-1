#include <stdio.h>
typedef int Bool;

Bool search(int a[], int n, int key) 
{
    int *p = a;
    int *end = a + n;
    while (p < end) {
        if (*p == key) {
            return 1;
        }
        p++;
    }
    return 0;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    Bool result = search(arr, n, key);
    if (result) {
        printf("找到 %d\n", key);
    } else {
        printf("未找到 %d\n", key);
    }
    return 0;
}