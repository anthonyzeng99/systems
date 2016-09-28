#include <stdio.h>

int main(){
  int x;
  int arr[1046993];
  printf("Size of int: %d\n",(int)sizeof(x));
  printf("Size of int[]: %d\n",(int)sizeof(arr));
  int *lg = &x;
  printf("%d\n",lg);
  return 0;
}
                                                       
