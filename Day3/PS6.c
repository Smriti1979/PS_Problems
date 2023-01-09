#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,x,j,a;
    float m,sum=1;
    printf("Enter the value of x and n:");
    scanf("%d%d",&x,&n);
    for(i=2;i<=n;i+=2)
    {
        int f=1;
        for(j=1;j<=i;j++)
        {
            f*=j;
        }
        m=(pow(-1,a))*(pow(x,2*a))/f;
        printf("%f\n",m);
        sum+=m;
        a++;
    }
    printf("sum =%f",sum);
}

