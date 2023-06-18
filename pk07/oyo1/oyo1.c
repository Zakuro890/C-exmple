#include <stdio.h>
int main(void){
    double weight,height;
    printf("身長(cm)を入力してください");
    scanf("%lf",&height);
    printf("体重(kg)を入力してください");
    scanf("%lf",&weight);
    double bmi;
    height= height/100;
    bmi = weight/height/height;
     printf("%d <-(1:肥満，0:標準以下)\n",bmi>25.0);
     return 0;
}