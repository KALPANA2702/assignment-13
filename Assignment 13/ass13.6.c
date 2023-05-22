//Write a recursive function to calculate factorial of a given number
#include <stdio.h>

int fact(int n);

int fact(int n)
{
    if (n == 1 || n == 0 )
        return 1;
    return (n) * fact(n - 1);
}

int main()
{
    int s, n;
    printf("Enter the number: ");
    scanf("%d", &n);
    s = fact(n);
    printf("factorial %d of given numbers: %d\n", n, s);
    return 0;
}