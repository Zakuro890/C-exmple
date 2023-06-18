#include <stdio.h>
int main(void){
    int kokugo, sugaku, eigo, goukei;
    double heikin;
    printf("国語点数:");
    scanf("%d",&kokugo);
    printf("数学点数:");
    scanf("%d",&sugaku);
    printf("英語点数:");
    scanf("%d",&eigo);
    goukei = kokugo + sugaku + eigo;
    heikin = (double)goukei / 3.0;
    printf("三科目合計=%d\n",goukei);
    printf("三科目平均=%.2f\n",heikin);

    return 0;
}