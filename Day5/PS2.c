#include<stdio.h>
#include<limits.h>
void main()
{
    int n,i,max;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("Number of days candle can be illuminated:%d",max);
}
