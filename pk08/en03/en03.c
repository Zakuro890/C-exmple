#include <stdio.h>
int main(void){
    int age,fee;
    printf("年齢：");
    scanf("%d",&age);
    if(age >= 12){
    fee = 600;
    }else{
        fee = 300;
    }
    printf("ロープウェイ運賃は%d円です.\n",fee);
}