#include <stdio.h>
int main(void){
    int num;
    printf("整数を入力してください:");
    (void)scanf("%d",&num);
    switch(num){
        case 1:
        printf("経済学部\n");
        break;

        case 3:
        printf("情報学部\n");
        break;

        case 7:
        printf("理工学部\n");
        break;

        default:
        printf("エラー\n");
        break;
        
    }
}