#include <stdio.h>
int main(void){
int n, sum = 0;
while (1)
{
printf("整数: \n");
scanf("%d", &n);
if (n == -1){
break;
}
if (n < 0 || n > 100){
continue;
}
sum += n;
}
printf("合計は%dです\n", sum);
return 0;
}