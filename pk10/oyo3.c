#include <stdio.h>
int main(void){
    int num;
    printf("®”F");
    scanf("%d",&num);

    switch(num){
        case 3:
        case 4:
        case 5:
        printf("t");
        break;

        case 6:
        case 7:
        case 8:
        printf("‰Ä");
        break;

        case 9:
        case 10:
        case 11:
        printf("H");
        break;

        case 12:
        case 1:
        case 2:
        printf("“~");
        break;

        default:
        printf("H");
        break;
    }
}