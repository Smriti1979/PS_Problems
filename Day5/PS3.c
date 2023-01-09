#include<stdio.h>
void main()
{
    int n,i,j,m,sum1=0,sum2=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=(n-1)/2;i++)
    {
        sum1+=a[i];
    }
    for(i=(n+1)/2;i<n;i++)
    {
        sum2+=a[i];
    }
    printf("sum1=%d\n",sum1);
    printf("sum2=%d\n",sum2);
    m=sum1*sum2;
    printf("ans=%d",m);
}
