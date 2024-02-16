#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  srand(time(0));

  int a = rand();
  int *ptr, **pptr;

  ptr = &a;
  pptr = &ptr;

  printf("Exploring Pointers in Lab1.\n");
  printf("Random Number: %d\n", a);
  printf("Current Time in Seconds: %d\n", (int)time(NULL));
  printf("Address of 'a': %p\n", (void *)&a);
  printf("Address stored in 'ptr': %p\n", (void *)ptr);
  printf("Address of 'ptr': %p\n", (void *)&ptr);
  printf("Value pointed by 'pptr': %p\n", (void *)*pptr);

  return 0;
}