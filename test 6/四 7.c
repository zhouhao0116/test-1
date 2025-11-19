#include<stdio.h>
int*find_middle(int a[],int n)
{
    if(n<=0)
    {
        return NULL;
    }
    int mid_index=n/2;
    return a+mid_index;
}
int main()
{
    int arr1[4]={10,20,30,40};
    int*mid1=find_middle(arr1, 4);
    printf("n=4时,中间元素是:%d\n",*mid1);
    int arr2[5]={1,2,3,4,5};
    int *mid2=find_middle(arr2,5);
    printf("n=5时,中间元素是:%d\n",*mid2);
    return 0;
}