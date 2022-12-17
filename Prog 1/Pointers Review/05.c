#include <stdio.h>

long addTwoNumbers(long *, long *);
 
int main()
{
   long n1, n2, sum;
   
   printf("\n\n Pointer : Add two numbers using call by reference:\n"); 
   printf("-------------------------------------------------------\n");   
 
   printf(" Input the first number : ");
   scanf("%ld", &n1);
   printf(" Input the second  number : ");
   scanf("%ld", &n2);   

   sum = addTwoNumbers(&n1, &n2);
   printf(" The sum of %ld and %ld  is %ld\n\n", n1, n2, sum);

   return 0;
}

long addTwoNumbers(long *n1, long *n2) 
{
   long sum;
   sum = *n1 + *n2;
   return sum;
}