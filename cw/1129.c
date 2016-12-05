#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  int x = 3;
  int status;
  int pid;
  pid = fork();
  if (f == 0) {
    x = 5;
    printf("Child x: %d\n", x);
  } else {
    wait(&status);
    printf("Parent x: %d\n", x);
  }
}
