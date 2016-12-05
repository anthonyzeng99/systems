#include <stdlib.h>
#include <stdio.h>

#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>

int main() {
  umask(0);
  int file = open("test", O_RDWR | O_CREAT, 0644);
  printf("file=%d\n", file);
}
