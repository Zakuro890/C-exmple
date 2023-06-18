#include <stdio.h>
int main(void){
    int chol;
printf("総コレステロール:");
scanf("%d",&chol);
if (not(chol>=150 && chol<=240)) {
printf("異常です．¥n");
} else {
printf("正常です．¥n");
}
}