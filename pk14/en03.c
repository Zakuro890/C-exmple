#include <stdio.h>
typedef struct Car{
    int num;    //ナンバー
    double gas; //ガソリン
} Car; //乗用車構造体

typedef struct Bus{
    int num;      //ナンバー
    int capacity; //乗車定員
} Bus; //バス構造体

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

    printf("乗用車(0)ですか？バス(1)ですか？: ");
    scanf("%d",&t);
    if (t==CAR){
        v.type=CAR;
        printf("ナンバーは？: ");
        scanf("%d",&v.data.car.num);
        printf("ガソリンは？: ");
        scanf("%lf",&v.data.car.gas);
    }else if (t==BUS){
        v.type=BUS;
        printf("ナンバーは？: ");
        scanf("%d",&v.data.bus.num);
        printf("乗車定員は？: ");
        scanf("%d",&v.data.bus.capacity);
    }

    switch(v.type){
    case CAR:
        printf("乗用車:num=%d, gas=%.1f\n",
               v.data.car.num,v.data.car.gas);
        break;
    case BUS:
        printf("バス:num=%d, capacity=%d\n",
               v.data.bus.num,v.data.bus.capacity);
        break;
    }

    return 0;
}