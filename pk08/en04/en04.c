#include <stdio.h>
int main(void){
    int genki,okane;
    printf("元気は？（ある：1,ない2):");
    scanf("%d",&genki);
    printf("お金は？(ある:1, ない:2): ");
    scanf("%d",&okane);

    if(genki == 2&& okane == 2){
        printf("家で本でも読んでいましょう");
    }else if(genki == 2 && okane == 1){
        printf("温泉でも言ってゆっくりしましょう");
    }else if(genki == 1 && okane == 2){
        printf("ジョギングして体を鍛えましょう");
    }else{
        printf("スキー場に行ってスキーをしましょう");
    }
}