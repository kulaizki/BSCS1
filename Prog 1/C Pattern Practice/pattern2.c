#include <stdio.h>

int main() 
{
  int i, j;
  
  for(i = 1; i <= 5; i++, printf("\n")) {
    for(j = 1; j <= 5; j++)
    {
      if(j==1||i==5||j==i)
      printf("* ");
      else
      printf("  ");
    }
  } 

  return 0;
}