#include <stdio.h>
#include <stdlib.h>

int mystrlen(char a[]) {
  int i = 0;
  while (a[i]) i++;
  return i;
}

int mystrcpy(char a[], char b[]) {
  int i = 0;
  while (b[i]) {
    a[i] = b[i];
    i++;
  }
  a[i] = 0;
   return *a;
}

int mystrncat(char a[], char b[], int n) {
  int aLength = mystrlen(a);
  int i = 0;
  while (n) {
    a[aLength + i] = b[i];
    n--;
    i++;
  }
  a[aLength + i] = 0;
   return *a;
}

int mystrcmp(char a[]) {
  int i = 0;
  while (a[i] == b[i]);
}

int mystrchr(char a[]) {
  return 0;
}

int main() {
  char a[] = "a string";
  char b[] = "another string";
  printf("%d\n",mystrlen(a));
  mystrncat(a,b,2);
}
