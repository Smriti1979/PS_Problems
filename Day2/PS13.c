#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=n;i>0;i-=5)
    {
        printf("%d ",i);
    }
    for(;i<=n;i+=5)
    {
        printf("%d ",i);
    }

}
