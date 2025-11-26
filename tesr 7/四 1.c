#include <stdio.h>
int search(int *arr, int target, int n)
{
    int *left = arr;
    int *right = arr + n - 1;
    while (left <= right) 
    {
        int *mid = left + (right - left) / 2;
        if (*mid == target) 
        {
            return mid - arr;
        } else if (*mid > target) 
        {
            right = mid - 1;
        } else 
        {
            left = mid + 1;
        }
    }
    return -1;
}
int main() 
{
    int arr[15] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int target, position;
    printf("请输入要查找的数：");
    scanf("%d", &target);
    position = search(arr, target, 15);
    if (position != -1) {
        printf("找到啦！位置是：%d\n", position);
    } else {
        printf("No Found\n");
    }
    return 0;
}