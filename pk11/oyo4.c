#include<stdio.h>
int main(void){
int i=0,data[11] = {0},buf;
printf("数値を入力してください\n");
while(1){
scanf("%d",&buf);
if(buf == -1)
break;
data[buf/10]++;
}
printf("：ヒストグラム：\n");
for(i = 0; i <= 10; i++)
printf("%3d：%d\n",i*10,data[i]);
return 0;
}

