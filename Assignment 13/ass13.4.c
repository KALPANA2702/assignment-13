//Write a recursive function to calculate sum of squares of first n natural numbers
#include <stdio.h>

int sumsqaure(int n);

int sumsquare(int n)
{
    if (n == 1)
        return 1;
    return (n * n) + sumsquare(n - 1);
}

int main()
{
    int s, n;
    printf("Enter the number: ");
    scanf("%d", &n);
    s = sumsquare(n);
    printf("Sum of the square first %d  natural numbers: %d\n", n, s);
    return 0;
}