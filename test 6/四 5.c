#include<stdio.h>
int digit(int n,int k)
{
    if(n<=0 || k<1)
    {
        return -1;
    }
    for(int i=1;i<k;i++)
    {
        n=n/10;
        if(n==0)
        {
            return -1;
        }
    }
    return n%10;
}
int main()
{
    printf("digit(829,1)=%d\n",digit(829,1));
    printf("digit(829,3)=%d\n",digit(829,3));
    printf("digit(12345,2)=%d\n",digit(12345,2));
    printf("digit(5,2)=%d\n",digit(5,2));
    return 0;
}