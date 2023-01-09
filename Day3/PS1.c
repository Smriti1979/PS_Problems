#include<stdio.h>
void main()
{
    int i,n,sum=0,j;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
       int f=1;
       for(i=1;i<=j;i++)
       {
         f*=i;
       }
       printf("fac=%d\n",f);
       sum+=f;
    }
    printf("sum=%d",sum);
}
