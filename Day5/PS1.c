#include<stdio.h>
#include<limits.h>
void main()
{
    int n,i,min=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(min>a[i])
            min=a[i];
    }
    printf("He'll give his sister:%d",min);
}
