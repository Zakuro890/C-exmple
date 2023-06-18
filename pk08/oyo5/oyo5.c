#include <stdio.h>
int main(void){
    int good;
    int bad;
    printf("善玉コレステロール:");
    scanf("%d",&good);
    printf("悪玉コレステロール");
    scanf("%d",&bad);
    if(good >=40){
        printf("善玉コレステロールは正常です");
    }else{
        printf("善玉コレステロールは異常です");
    }
    if(bad >= 70&&bad <= 140){
        printf("悪玉コレステロールは正常です");
    }else{
        printf("悪玉コレステロールは正常です");
    }
}