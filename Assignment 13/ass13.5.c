//Write a recursive function to calculate sum of digits of a given number
#include <stdio.h>

int sumdigit(int n);

int sumdigit(int n)
{
    if (n<10)
        return n;
   else
         return (n%10) + sumdigit(n/10);
}

int main()
{
    int s, n;
    printf("Enter the number: ");
    scanf("%d", &n);
    s = sumdigit(n);
    printf("Sum of the given %d numbers: %d\n", n, s);
    return 0;
}