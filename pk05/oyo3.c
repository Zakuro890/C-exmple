#include <stdio.h>
int main(void){
    double radius,cf,area;
    printf("半径を入力: ");
    scanf("%lf",&radius);
    cf = 2.0 * radius * 3.142;
    area = radius * radius * 3.142;
    printf("円周=%.3f\n",cf);
    printf("面積=%.3f\n",area);

    return 0;
}