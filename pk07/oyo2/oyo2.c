#include <stdio.h>
int main(void){
    int gender,age;
printf("性別を整数で入力(男:1，女:2): ");
scanf("%d",&gender);
printf("年齢は: ");
scanf("%d",&age);
printf("持ち物は着替えハブラシ");
if (gender == 1) {
if (age >= 20) {
printf("髭剃り");
}
}
printf("です．¥n");
return 0;
}