#include <stdio.h>
#define NUM 3
int main(void){
int array[NUM];
int i, num, sum=0;
for (i=0; i<NUM; i++) {
printf("�����F\n");
scanf("%d",&num);
sum = sum + num;
}
printf("���v�F%d\n",sum);
printf("���ρF%.2f\n",(double)sum/NUM);
return 0;
}