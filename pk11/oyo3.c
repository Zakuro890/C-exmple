#include <stdio.h>
int main(void){
    int weight;
    int value;
    printf("�d�������œ��͂��ĉ�����>");
    scanf("%d",&weight);
    if(weight<=4000&&weight>2000){
        printf("�����F1350�~");
    }else if(weight<=2000&&weight>1000){
        printf("�����F1040�~");
    }else if(weight<=1000&&weight>500){
        printf("�����F710�~");
    }else if(weight<=500&&weight>250){
        printf("�����F510�~");
    }else if(weight<=250&&weight>150){
        printf("�����F350�~");
    }else if(weight<=150>100){
        printf("�����F300�~");
    }else if(weight<=100){
        printf("�����F220�~");
    }else{
        printf("�����F200�~");
    }
    return 0;
}