#include <stdio.h>
typedef enum Flower{IRIS, TULIP, LILY, DANDELION} Flower;
//IRIS:�A����, TULIP:�`���[���b�v, LILY:����, DANDELION:�^���|�|

int main(void){
    int i;
    Flower flowers[] = {LILY, DANDELION, IRIS, TULIP};
    for (i=0;i<4;i++){
        switch(flowers[i]) {
        case IRIS:      printf("�A����\n"); break;
        case TULIP:     printf("�`���[���b�v\n"); break;
        case LILY:      printf("����\n"); break;
        case DANDELION: printf("�^���|�|\n"); break;
        }
    }

    return 0;
}