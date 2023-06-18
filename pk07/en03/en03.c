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
    if(bmi >= 25.0){
    printf("肥満\n");
    }else{
    printf("標準かそれ以下\n");
    }
    return 0;
}