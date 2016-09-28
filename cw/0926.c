#include <stdio.h>
#include <stdlib.h>

int stringLength(char a[]) {
  int i = 0;
  while (a[i]) i++;
  return i;
}

int main() {
  char x[] = "dog";
  char y[] = "computer";
  char z[] = "c";
  printf("%d\n",stringLength(x));
  printf("%d\n",stringLength(y));
  printf("%d\n",stringLength(z));
  strcpyDemo();
  strncpyDemo();
}

int strcpyDemo() {
  printf("\nSTRCPY DEMO\n");
  char str1[] = "sample string";
  char str2[20];
  char str3[] = "another sample string";
  printf("str1:%s\nstr2:%s\nstr3:%s\n",str1,str2,str3);
  printf("\nCopy str1 to str2\n");
  strcpy(str2,str1);
  printf("str1:%s\nstr2:%s\nstr3:%s\n",str1,str2,str3);
  printf("\nCopy str3 to str2\n");
  strcpy(str2,str3);
 printf("str1:%s\nstr2:%s\nstr3:%s\n",str1,str2,str3);

}

int strncpyDemo() {
  printf("\nSTRNCPY DEMO\n");
  char strn1[] = "corgi";
  char strn2[20];
  char strn3[] = "golden retriever";
  printf("strn1:%s\nstrn2:%s\nstrn3:%s\n",strn1,strn2,strn3);
  printf("\nCopy first 3 char of str1 to str2\n");
  strncpy(strn2,strn1,3);
  printf("strn1:%s\nstrn2:%s\nstrn3:%s\n",strn1,strn2,strn3);
  printf("\nCopy first 4 char of str3 to str1\n");
  strncpy(strn1,strn3,4);
 printf("strn1:%s\nstrn2:%s\nstrn3:%s\n",strn1,strn2,strn3);

}

int mystrcpy(char a[], char b[]) {
  int i = 0;
  while (b[i]) a[i] = b[i];
  return &a;;
}
