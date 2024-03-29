#include<stdio.h>
#include<stdlib.h>

int main()
{
    // Q2.1: seed the RNG using the largest (N+5)-bit signed integer
    //       where N is the last digit of your UIN
    srand(4095);

    int a = rand();

    // Q2.2: assign the memory address of `a` to `ptr`
    int *ptr = &a;

    // Q2.3: assign the memory address of `ptr` to `pptr`
    int **pptr = &ptr;

    // Q2.4: print the value of `a` using variable `ptr`
    printf("The value of a is %d\n", *ptr);

    // Q2.5: print the value of `a` using variable `pptr`
    printf("The value of a is %d\n", **pptr);

    return 0;
}