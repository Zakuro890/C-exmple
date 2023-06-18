#include <stdio.h>
int main(void){
    int num;
    printf("整数を入力してください:");
    scanf("%d",&num);
     if (num>=-8) {
      if (num<15) {
        printf("範囲内\n");
      } else {
        printf("範囲外\n");
      }
    } else {
      printf("範囲外\n");
    }
    return 0;
}