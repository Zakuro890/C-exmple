#include <stdio.h>
int main(void){
    double d1,d2,dw;
    d1=123.45;
    printf("実数:\n");
    scanf("%lf",&d2);
    dw = d1+d2;
    printf("%f+%f=%f\n",d1,d2,dw);
    return 0;
}