#include<stdio.h>
void main()
{
    int n,i=0,j=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int a[n];
    while(j<=n)
    {
        a[i]=j;
        j+=2;
        i++;
    }
    if(n%2==0)
    {
        a[i]=n;
        j=n-2;
        i++;
        while(j>0)
        {
            a[i]=j;
            j-=2;
            i++;
        }

    }
    else
    {
        a[i]=n-1;
        j=n-3;
        i++;
        while(j>0)
        {
            a[i]=j;
            j-=2;
            i++;
        }

    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
