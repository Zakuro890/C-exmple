#include <stdio.h>
int main(void){
    int num,sum;
    do{
        printf("�����F");
        scanf("%d",&num);
        sum = sum + sum;
    }while(num != 0);
    printf("���v��%d�ł�",sum);
    return 0;
}