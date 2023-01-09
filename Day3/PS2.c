#include<stdio.h>
void main()
{
    int i,n,sum=0,j;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
       int f=1;
       float m;
       for(i=1;i<=j;i++)
       {
         f*=i;
       }
       m=f/j;
       printf("%f \n",m);
       sum+=m;
    }
    printf("sum=%d",sum);


}
