#include <stdlib.h>

char *switcher(const char **codes, int n) {
  
  char *s = (char *)malloc(n+1);
  for (int i = 0; i < n; ++i) {
    int x = atoi(codes[i]);
    if (x >= 1 && x <= 27) {
      s[i] = 'a' + (26 - x);
    }    
    else if (x == 27) {
      s[i] = '!';
    }
    else if (x == 28) {
      s[i] = '?';
    }
    else {
      s[i] = ' ';
    }
  }
  
  return s;
}