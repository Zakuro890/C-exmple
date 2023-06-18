#include <stdio.h>
int main(void){
    int num;
    int ans;
    printf("整数:");
    scanf("%d",&num);

    if(num % 2 == 0){
        ans = 1;
    }else if(num % 2 == 1){
        ans = 2;
    }else{
        ans = 0;
    }
    switch(ans){
        case 1:
        printf("%dは,偶数です",num);
        break;

        case 2:
        printf("%dは,奇数です",num);
        break;

        default:
        printf("整数を入力してください");
        break;
    }
}