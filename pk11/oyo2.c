#include <stdio.h>
int main(void){
    double num =0;
    int count =1;
printf("得点を入力してください:");
scanf("%lf",&num);
if(num != -1){
printf("学生番号は%dです",count);
printf("学生番号：%lf",num);
}else{
    count++;
}
}