#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 10;
    printf("整数：%d\n", num);          // %d 打印 int 整数。输出：10

    long lnum = 123456;
    printf("长整数：%ld\n", lnum);      // %ld 打印 long 整数。输出：123456

    long long llnum = 123456789012LL;
    printf("长长整数：%lld\n", llnum); // %lld 打印 long long 整数。输出：123456789012

    unsigned int unum = 200;
    printf("无符号整数：%u\n", unum);   // %u 打印无符号整数 unsigned int。输出：200

    char ch = 'A';
    printf("单个字符：%c\n", ch);       // %c 打印单个字符。输出：A

    char str[] = "hello world";
    printf("字符串：%s\n", str);        // %s 打印字符串。输出：hello world

    double f = 3.1415926;
    printf("浮点数：%f\n", f);          // %f 打印浮点数（float / double）。输出：3.141593
    printf("保留2位小数：%.2f\n", f);   // 输出：3.14

    return 0;
}