#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrlen(char a[]) {
  int i = 0;
  while (a[i]) i++;
  return i;
}

char * mystrcpy(char a[], char b[]) {
  int i = 0;
  while (b[i]) {
    a[i] = b[i];
    i++;
  }
  a[i] = 0;
   return a;
}

char * mystrncat(char a[], char b[], int n) {
  int aLength = mystrlen(a);
  int i = 0;
  while (n) {
    a[aLength + i] = b[i];
    n--;
    i++;
  }
  a[aLength + i] = 0;
  return a;
}

int mystrcmp(char a[], char b[]) {
  int i = 0;
  int alen = mystrlen(a);
  int blen = mystrlen(b);
  for (; i < alen || i < blen; i++) {
    if (a[i] != b[i]) return a[i] - b[i];
  }
  return 0;
}

char * mystrchr(char a[], char b) {
  int i = 0;
  while (a[i]) {
    if (a[i] == b) {
      return &a[i];
    }
    i++;
  }
    return 0;
}

int main() {
   printf("STRING FUNCTIONS TEST\n");
   
   //strlen test
   printf("\nSTRLEN TEST:\nstring:systems\nbuilt-in:%d\nmine:%d\n",(int)strlen("systems"), mystrlen("systems"));
   
   //strcpy test
   char stringtocopy[] = "corgi";
   char stringtocopyto[20];
   printf("\nSTRCPY TEST:\nstring to copy:%s\nstring to copy to:%s\n",stringtocopy,stringtocopyto);
   printf("built-in:%s\nmine:%s\n",strcpy(stringtocopyto,stringtocopy),mystrcpy(stringtocopyto,stringtocopy));
   
   //strncpy test
   char strncat1[] = "pine";
   char strncat2[] = "apples";
   char mystrncat1[] = "pine";
   char mystrncat2[] = "apples";
   printf("\nSTRNCAT TEST:\noriginal string:pine\nstring to cat:apple\n# of char to cat:5\nbuilt-in:%s\nmine:%s\n",strncat(strncat1,strncat2,5), mystrncat(mystrncat1,mystrncat2,5));

   //strcmp test
   char strcmp1[] = "string";
   char strcmp2[] = "not a string";
   char strcmp3[] = "dolphins";
   char strcmp4[] = "dolphins";
   printf("\nSTRCMP TEST 1:\nstring 1:%s\nstring 2:%s\nbuilt-in:%d\nmine:%d\n",strcmp1,strcmp2,strcmp(strcmp1,strcmp2),mystrcmp(strcmp1,strcmp2));
   printf("\nSTRCMP TEST 2:\nstring 1:%s\nstring 2:%s\nbuilt-in:%d\nmine:%d\n",strcmp3,strcmp4,strcmp(strcmp3,strcmp4),mystrcmp(strcmp3,strcmp4));

   //strchr test
   char strchr1[] = "sample string";
   char strchr2 = 'p';
   printf("\nSTRCHR TEST:\nstring:%s\nchar:%c\nbuilt-in:%s\nmine:%s\n",strchr1,strchr2,strchr(strchr1,strchr2),mystrchr(strchr1,strchr2));

}
