#include <stdio.h>

int main(void)
{
    double a,b;
    printf("Enter = ");
    scanf("%lf",&a);
    printf("Enter = ");
    scanf("%lf",&b);
    printf("%.3f + %.3f = %.3f\n",a,b,a+b);
    printf("%.3f - %.3f = %.3f\n",a,b,a-b);
    printf("%.3f * %.3f = %.3f\n",a,b,a*b);
    printf("%.3f / %.3f = %.3f\n",a,b,a/b);

    return 0;
}