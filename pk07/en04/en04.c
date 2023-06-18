#include <stdio.h>
int main(void){
    int apple,oneprice,price;
    printf("リンゴを何個買いますか:");
    scanf("%d",&apple);
    oneprice = 50;
    if(7 <=apple){
        price = oneprice * apple *0.8;
    }else if(6>=apple &&apple>=4){
        price = oneprice * apple *0.9;
    }else{
        price = oneprice * apple;
    }
      printf("販売価格は%d円です．\n", price);
    return 0;
}