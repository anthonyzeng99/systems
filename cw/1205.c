#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>

int main() {

  int key = ftok("makeile", 5);
  int semid;

  semid = semget(key, 1, IPC_CREAT | 0644);

  printf("semaphore created: %d\n", semid);

  return 0;
  
}
