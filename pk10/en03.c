#include <stdio.h>
int main(void){
    int num,sum,count;
    double avg;
    count =0;
    while(num != -1){
        printf("�����F");
        scanf("%d",num);
        sum = sum+num;
        count = count+1;
        break;
    }
    avg = sum/count;
    printf("���ς�%lf�ł��B",avg);
}