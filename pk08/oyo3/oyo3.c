#include <stdio.h>
int main(void){
    int n,fee;
    printf("リンゴの個数");
    scanf("%d",&n);
    if(n <= 3){
    fee = 50 * n;
    }else if(n <= 4 && n >=6 ){
        fee  = 50 * (n*0.9);
    }else{
        fee  = 50 * (n*0.8);
    }
    printf("料金は%d円です.\n",fee);
}