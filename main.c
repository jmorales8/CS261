// #include <stdio.h>

// int main() {
//     // Define the 32-bit variable string1
//     unsigned int string1 = 0xF321FEED;

//     // Left shift string1 by 3 bits
//     unsigned int result = string1 << 3;

//     // Print the result in hexadecimal
//     printf("Result: 0x%X\n", result);

//     return 0;
// }
#include <stdio.h>

int main() {
    unsigned int string1 = 0x9F21DEFE;
    unsigned int mask = 0x00000105;

    // Evaluate the given statement
    unsigned int result = (~string1) & ((mask << 15) | (mask << 10) | (mask << 5) | (mask) | (string1 >> 5));

    printf("Value of the statement: 0x%08X\n", result);

    return 0;
}
