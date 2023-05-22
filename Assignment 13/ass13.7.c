//Write a recursive function to calculate HCF of two numbers
#include <stdio.h>

int Hcf(int n1 , int n2);

int Hcf(int n1 , int n2)
{
    if (n1>n2)
        return Hcf(n1-n2 , n2);
   else
   {
    if (n1<n2)
    {
        return Hcf(n2-n1 , n1);
   }
   else
   {
   return (n1);
   }
   }
}

int main()
{
    int n1,n2,hcff;
    printf("Enter two number: ");
    scanf("%d %d", &n1,&n2);
    hcff=Hcf(n1 , n2);
    printf("hcf of the given number is %d:\n", hcff);
    return 0;
}