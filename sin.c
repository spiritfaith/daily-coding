#include <stdio.h>
#include <math.h>
#define PI 3.14
// 输入一个角度（0-360度），输出其正弦函数值。
int main()
{
    float a;
    double b;
    scanf("%f", &a);
    a = (a / 180) * PI;// 转化为弧度制
    b = sin((double)a);
    printf("%.2f\n", b);
    return 0;
}
