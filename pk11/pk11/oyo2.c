#include <stdio.h>
int main(void){
    double num =0;
    int count =1;
printf("���_����͂��Ă�������:");
scanf("%lf",&num);
if(num != -1){
printf("�w���ԍ���%d�ł�",count);
printf("�w���ԍ��F%lf",num);
}else{
    count++;
}
}