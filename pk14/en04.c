#include <stdio.h>

typedef struct Car{
    int num;    //ナンバー
    double gas; //ガソリン
}Car; //乗用車構造体

typedef struct Bus{
    int num;      //ナンバー
    int capacity; //乗車定員
}Bus; //バス構造体

typedef enum VType {CAR,BUS} VType;

typedef struct Vehicle{
    VType type;
    union{
        Car car;
        Bus bus;
    }data;
}Vehicle;

int main(void){
    int i;
    Car c1 = {1234,25.5};
    Car c2 = {4567,52.2};
    Bus b1 = {6789,50};
    Vehicle vs[3];

    vs[0].type = CAR;
    vs[0].data.car = c1;
    vs[1].type = CAR;
    vs[1].data.car = c2;
    vs[2].type = BUS;
    vs[2].data.bus = b1;

    for (i=0;i<3;i++){
        switch(vs[i].type) {
        case CAR:
            printf("乗用車:num=%d, gas=%.1f\n",vs[i].data.car.num,vs[i].data.car.gas);
            break;
        case BUS:
            printf("バス:num=%d, capacity=%d\n",vs[i].data.bus.num,vs[i].data.bus.capacity);
            break;
        }
    }

    return 0;
}