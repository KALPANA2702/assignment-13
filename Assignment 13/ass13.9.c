//Write a program in C to count the digits of a given number using recursion.
#include <stdio.h>

int count(int n);

int count(int n)
{
    if (n<10)
        return 1;
   else
   {
    return 1 +count(n/10);
   }
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("digit is %d",count(n));
    return 0;
}