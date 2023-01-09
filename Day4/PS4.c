#include<stdio.h>
int pno(int i)
{
    int sum=0,j;
    for(j=1;j<i;j++)
    {
        if(i%j==0)
        {
            printf("%d\n",j);
            sum+=j;
        }
    }
    if(sum==i)
        return i;
}
void main()
{
    int i,u,l;
    printf("Enter the value of lower and upper limit:");
    scanf("%d%d",&l,&u);
    for(i=l;i<=u;i++)
    {
        printf("%d",pno(i));
    }

}

