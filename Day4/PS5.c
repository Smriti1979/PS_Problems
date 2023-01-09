#include<stdio.h>
int prime(int i)
{
    int j,flag=0;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        return 1;

}
void main()
{
    int u,l,i;
    printf("Enter lower and upper limit:");
    scanf("%d%d",&l,&u);
    for(i=l;i<u;i++)
    {
        if(prime(i))
        printf("%d\n",i);
    }
}

