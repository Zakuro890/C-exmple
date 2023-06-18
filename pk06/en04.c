#include <stdio.h>
int main(void){
    double hankei,menseki,taiseki;
    printf("半径を入力:");
    scanf("%lf",&hankei);
    menseki = 4.0*3.14*hankei*hankei;
    taiseki = 4.0/3.0*3.14*hankei*hankei*hankei;
    printf("球の表面積=%f\n",menseki);
    printf("球の体積=%f\n",taiseki);

    return 0;
}