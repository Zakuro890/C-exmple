#include <stdio.h>
typedef enum Flower{IRIS, TULIP, LILY, DANDELION} Flower;
//IRIS:アヤメ, TULIP:チューリップ, LILY:ユリ, DANDELION:タンポポ

int main(void){
    int i;
    Flower flowers[] = {LILY, DANDELION, IRIS, TULIP};
    for (i=0;i<4;i++){
        switch(flowers[i]) {
        case IRIS:      printf("アヤメ\n"); break;
        case TULIP:     printf("チューリップ\n"); break;
        case LILY:      printf("ユリ\n"); break;
        case DANDELION: printf("タンポポ\n"); break;
        }
    }

    return 0;
}