#include <stdio.h>
int main(void){
    int a;
    printf("整数を入力して下さい：");
    scanf("%d",&a);
  if(a >=60)
  printf("合格");

  if(a < 60)
  printf("不合格");
  return 0;
}