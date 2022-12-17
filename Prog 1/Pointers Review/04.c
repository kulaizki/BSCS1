#include <stdio.h>
int main()
{
   int n1, n2, *ptr, *qtr, sum;
   
   printf("\n\n Pointer : Add two numbers :\n"); 
   printf("--------------------------------\n");   
 
   printf(" Input the first number : ");
   scanf("%d", &n1);
   printf(" Input the second  number : ");
   scanf("%d", &n2);   
 
   ptr = &n1;
   qtr = &n2;
 
   sum = *ptr + *qtr;
 
   printf(" The sum of the entered numbers is : %2d\n\n",sum);
 
   return 0;
}