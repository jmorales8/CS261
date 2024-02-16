#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i, sum=0;

    printf("Enter the number of terms you want to sum: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) { //iterate this loop n times
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        sum += next;
    }

    printf("The sum of the first %d elements of the Fibonacci sequence is : %d\n", n, sum);

    return 0;
}