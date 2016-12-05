#include <stdio.h>
#include <unistd.h>

int main() {
  char *argv[] = {"ps", "-ax",0};
  int i = 0;
  execlp("emacs", "emacs", "-nw" ,NULL);
  //i = execvp(argv[0], argv);0
  printf("%d\n", i);
}
