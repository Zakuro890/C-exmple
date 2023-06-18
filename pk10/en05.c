#include <stdio.h>
int main(void){
    int num,sum;
    sum = 0;
    do{
    printf("整数：");
    scanf("%d",&num);
    sum = sum+num;
    printf("合計値：%d\n",sum);
    }while(num !=0);
}