#include <stdio.h>
int main(void){
    int num;
    (void)scanf("%d",&num);
    if(num >= 0 && num <=100){
        printf("正常です");
    }else{
        printf("正常ではありません");
    }
    return 0;
}