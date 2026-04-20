#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    double height, weight, bmi;//double = 双精度浮点型存储带小数点的数字
    printf("Please enter your height (meters) and weight (kilograms):\n");
    scanf("%lf %lf", &height, &weight);//%lf：双精度浮点数格式符
    bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi);//%.2f：保留两位小数
    return 0;
}