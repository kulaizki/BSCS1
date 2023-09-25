#include <stdio.h>

int main() {

    int i, j, k;
    printf("Enter n: ");
    scanf("%d", &k);

  for(i = 1; i <= k; i++, printf("\n")) {
    
    for(j = 1; j <= i; j++) {
      printf("%d", j);
    }
  } 

  for(i = k-1; i >= 1; i--, printf("\n")) {

    for(j = 1; j <= i; j++) {
      printf("%d", j);
    }
  }
    return 0;
}