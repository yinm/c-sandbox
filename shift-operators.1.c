// https://www.sejuku.net/blog/24512

#include <stdio.h>

void printBi(char num)
{
    int len = 8;
    int bit[8];
    int x;

    for (int i = 0; i < len; i++) {
        x = 1 << i;
        x = num & x;
        bit[len - i - 1] = x >> i;
    }

    printf("0b");
    for (int i = 0; i < len; i++) {
        printf("%d", bit[i]);
    }
}

int main(void)
{
    int num;
    int result;

    num = 0b00000000;
    result = ~num;

    printf("2進数:");
    printBi(result);
    printf("(10進数:%d)\n", result);

    num = 0b00001111;
    result = ~num;

    printf("2進数:");
    printBi(result);
    printf("(10進数:%d)\n", result);

    return 0;
}