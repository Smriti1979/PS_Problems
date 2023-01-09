#include<stdio.h>
float mean(int arr[5])
{
    int sum=0,i;
    for(i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    return (float) sum/5;
}
int median(int arr[])
{
    return arr[2];
}
void main()
{
    int i,arr[5];
    printf("Enter the elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("mean:%f\n",mean(arr));
    printf("median:%d",median(arr));
}

