#include<stdio.h>
void main()
{
    int n,i,sum=0,m;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        m=i*(i+1)*(i+2);
        sum+=m;
    }
    printf("%d",sum);
}
