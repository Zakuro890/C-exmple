#include <stdio.h>
int main(void){
    int num,sum;
    sum = 0;
    do{
    printf("�����F");
    scanf("%d",&num);
    sum = sum+num;
    printf("���v�l�F%d\n",sum);
    }while(num !=0);
}