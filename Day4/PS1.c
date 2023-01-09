#include<stdio.h>
void main()
{
    int t,n,a,rev=0;
    printf("Enter a number:");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        a=n%10;
        rev=10*rev+a;
        n=n/10;
    }
    printf("%d\n",rev);
    if(rev==t)
        printf("PALINDROME");
    else
        printf("NOT PALINDROME");
}
