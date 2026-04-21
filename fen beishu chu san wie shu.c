#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num, bai, shi, ge;

    printf("Please enter a three-digit positive integer:\n");
    scanf("%d", &num);

    // 检查是否是三位数
    if (num < 100 || num > 999) {
        printf("Error: The number is not a three-digit number.\n");
        return 1;
    }

    ge = num % 10;
    shi = num / 10 % 10;
    bai = num / 100;

    printf("Hundreds place: %d\n", bai);
    printf("Tens place: %d\n", shi);
    printf("Units place: %d\n", ge);

    return 0;
}