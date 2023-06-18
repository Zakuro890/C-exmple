#include <stdio.h>
typedef struct Car{
    int num;    //�i���o�[
    double gas; //�K�\����
} Car; //��p�ԍ\����

typedef struct Bus{
    int num;      //�i���o�[
    int capacity; //��Ԓ��
} Bus; //�o�X�\����

typedef enum VType {CAR,BUS} VType;

typedef struct Vehicle{
    VType type;
    union {
        Car car;
        Bus bus;
    }data;
}Vehicle;

int main(void){
    int t;
    Vehicle v;

    printf("��p��(0)�ł����H�o�X(1)�ł����H: ");
    scanf("%d",&t);
    if (t==CAR){
        v.type=CAR;
        printf("�i���o�[�́H: ");
        scanf("%d",&v.data.car.num);
        printf("�K�\�����́H: ");
        scanf("%lf",&v.data.car.gas);
    }else if (t==BUS){
        v.type=BUS;
        printf("�i���o�[�́H: ");
        scanf("%d",&v.data.bus.num);
        printf("��Ԓ���́H: ");
        scanf("%d",&v.data.bus.capacity);
    }

    switch(v.type){
    case CAR:
        printf("��p��:num=%d, gas=%.1f\n",
               v.data.car.num,v.data.car.gas);
        break;
    case BUS:
        printf("�o�X:num=%d, capacity=%d\n",
               v.data.bus.num,v.data.bus.capacity);
        break;
    }

    return 0;
}