//Write a program in C to calculate the power of any number using recursion.
#include <stdio.h>

int power(int n , int p);

int power(int n , int p)
{
    if (p==1)
        return n;
    return n * power(n,p-1);
}

int main()
{
    int n,p;
    printf("Enter number and its power: ");
    scanf("%d %d",&n,&p);
    p=power(n,p);
    printf("digit is %d",p);
    return 0;
}