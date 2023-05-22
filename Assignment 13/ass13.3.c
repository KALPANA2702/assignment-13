//Write a recursive function to calculate sum of first N odd natural numbers
#include <stdio.h>

int sumN(int n);

int sumN(int n)
{
    if (n == 1)
        return 1;
    return (2 * n - 1) + sumN(n - 1);
}

int main()
{
    int s, n;
    printf("Enter the number: ");
    scanf("%d", &n);
    s = sumN(n);
    printf("Sum of the first %d odd natural numbers: %d\n", n, s);
    return 0;
}