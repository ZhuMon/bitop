#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    //
    // unsigned number only
    //

    unsigned long x = 32;

    // x & (x-1)
    //
    // In unsigned number, x & (x-1) will delete the most right 1
    //
    // Check whether the number is the power of 2
    //      x = 0101, x-1 = 0100, x & (x-1) = 0100 != 0
    //      x = 0100, x-1 = 0011, x & (x-1) = 0000 == 0

    if ((x & (x - 1)) == 0) {
        printf("(x & (x-1)) == 0, x is 2^n\n");
    }

    //
    // character
    //

    // ('a' | ' ') ('A' | ' ')
    //
    // A character 'or' with ' ' will turn the character to lowercase
    //
    // 'a' in ascii code: 97 = 01100001b = 0x61
    // 'A' in ascii code: 65 = 01000001b = 0x41
    // ' ' in ascii code: 32 = 00100000b = 0x20
    //
    // ('a' | ' ') = 01100001b = 'a'
    // ('A' | ' ') = 01100001b = 'a'
    //

    // a random string mixed with uppercase and lowercase
    char *str1 = "CdAafSvQ";
    u_int64_t str2 = (*(u_int64_t *) str1 | 0x2020202020202020);
    char *str3 = malloc(sizeof(char) * 9);

    memset(str3, '\0', 9);
    strncpy(str3, (char *) &str2, 8);

    printf("before: %s\n", str1);
    printf("after:  %s\n", str3);



    return 0;
}
