#include <stdio.h>
int main(void){
    int num,sum;
    do{
        printf("整数：");
        scanf("%d",&num);
        sum = sum + sum;
    }while(num != 0);
    printf("合計は%dです",sum);
    return 0;
}