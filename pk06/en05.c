#include <stdio.h>
int main(void){
    double height, weight, bmi;
    printf("身長を入力:");
    scanf("%lf",&height);
    height /= 100.0;
    printf("体重を入力:");
    scanf("%lf",&weight);
    bmi = weight / height / height;
    printf("BMI=%f\n",bmi);
    return 0;
}