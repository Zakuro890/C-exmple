#include <stdio.h>

typedef enum VType {CAR,BUS} VType;

int main(void){
    int i;
    VType vehicles[] = {BUS,CAR,BUS,BUS,CAR};

    for (i=0;i<5;i++){
        switch (vehicles[i]){
        case CAR: printf("%d�Ԗڂ͏�p�Ԃł�.\n",i); break;
        case BUS: printf("%d�Ԗڂ̓o�X�ł�.\n",i); break;
        }
    }

    return 0;
}