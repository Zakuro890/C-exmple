#include <stdio.h>
int main(void){
    int i,j;
    printf("整数を入力せよ:");
    scanf("%d",&i);
    j = (i<<1) + (i<<3);
    printf("入力値の10倍:%d\n",j);
    return 0;
}