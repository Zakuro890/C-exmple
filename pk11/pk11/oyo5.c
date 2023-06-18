#include <stdio.h>
#define NUM 3
int main(void){
int array[NUM];
int i, num, sum=0;
for (i=0; i<NUM; i++) {
printf("整数：\n");
scanf("%d",&num);
sum = sum + num;
}
printf("合計：%d\n",sum);
printf("平均：%.2f\n",(double)sum/NUM);
return 0;
}