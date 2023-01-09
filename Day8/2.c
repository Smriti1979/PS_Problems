#include<stdio.h>
#include<math.h>
void main()
{
    int A,B,P,k,rem;
    printf("enter the value of A and B : ");
    scanf("%d%d",&A,&B);
    P=pow(A,B);
    printf("Position from end : ");
    scanf("%d",&k);
    while(k--)
    {
        rem = P%10;
        P=P/10;
    }
    printf("ans is %d",rem);

}
