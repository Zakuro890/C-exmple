#include <stdio.h>

typedef struct Car {
    int num;    //�i���o�[
    double gas; //�K�\����
} Car; //��p�ԍ\����

typedef struct Bus {
    int num;      //�i���o�[
    int capacity; //��Ԓ��
} Bus; //�o�X�\����

typedef union Vehicle {
    Car car;
    Bus bus;
} Vehicle; //��蕨���p��

int main(void){
    Car c = {1234,25.5};
    Bus b = {4567,50};

    Vehicle v;
    v.car = c;
    printf("v.car.num=%d, v.car.gas=%.1f\n", v.car.num, v.car.gas);
    v.bus = b;
    printf("v.bus.num=%d, v.bus.capacity=%d\n",  v.bus.num, v.bus.capacity);

    return 0;
}