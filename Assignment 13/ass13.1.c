#include<stdio.h>
int sumN(int n);
int sumN(int n)
{
    if(n==1)
    return 1;
    return n + sumN(n-1);
}
int main()
{
    int s,n;
    printf("enter the number");
    scanf("%d",&n);
    s=sumN(n);
    printf("Sum of first %d natural numbers: %d\n",n,s );
    return 0;
}