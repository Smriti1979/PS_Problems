#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,j;
    float m,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int f=1;
        for(j=1;j<=(i+2);j+=2)
        {
            f*=j;
        }
        m=(pow(-1,i+1))*i/f;
        printf("%f\n",m);
        sum+=m;
    }
    printf("sum =%f",sum);
}

