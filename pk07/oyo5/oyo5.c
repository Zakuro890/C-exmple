#include <stdio.h>
int main(void){
 int score;
    printf("点数を入力してください: ");
    scanf("%d", &score);
    if (score<0) {
      printf("入力エラー\n");
    } else if (score<50) {
      printf("不可\n");
    } else if (score<65) {
      printf("可\n");
    } else if (score<80) {
      printf("良\n");
    } else if (score<=100) {
      printf("優\n");
    } else {
      printf("入力エラー\n");
    }

    return 0;
}