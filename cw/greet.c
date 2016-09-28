#include <stdio.h>
#include <stdlib.h>


void greet(int n) {
  int i = 0;		       
  for (; i < n; n++) { 
    printf("Hello!\n");
  }
}

int main() {
  greet(10);
  return 0;
}

