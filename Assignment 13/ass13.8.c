//Write a recursive function to print first N terms of Fibonacci series
#include <stdio.h>

int fibonacci(int n);

int fibonacci(int n)
{
    if (n==1 || n==2)
        return 1;
   else
   {
    return fibonacci(n-1) + fibonacci(n-2);
   }
}

int main()
{
    int n,i;
    printf("Enter number you want to see of fibbnocci: ");
    scanf("%d", &n);
    fibonacci(n);
    for(i=1;i<=n;i++)
    printf("%d",fibonacci(i));
    return 0;
}