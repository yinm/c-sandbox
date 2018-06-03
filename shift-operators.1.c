// https://www.sejuku.net/blog/24512

#include <stdio.h>

void printBi(int num)
{
    int len = 4;
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
    int num1, num2, result;

    num1 = 0b0101;
    num2 = 0b0011;
    result = num1 | num2;

    printf("2進数:");
    printBi(result);
    printf("(10進数:%d)\n", result);

    return 0;
}