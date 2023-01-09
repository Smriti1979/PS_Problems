#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,x,j;
    float m,sum=1;
    printf("Enter the value of x and n:");
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        int f=1;
        for(j=1;j<=i;j++)
        {
            f*=j;
        }
        m=(pow(-1,i))*(pow(x,i))/f;
        printf("%f\n",m);
        sum+=m;
    }
    printf("sum =%f",sum);
}
