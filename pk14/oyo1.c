#include <stdio.h>
typedef struct Kadai{
    char num1;
    short num2;
    int num3;
}Kadai;

int main(void){
    Kadai k;
    k.num1 = 1;
    k.num2 = 2;
    k.num3 = 3;
    printf("k.num1=%d\n",k.num1);
    printf("k.num2=%d\n",k.num2);
    printf("k.num3=%d\n",k.num3);
    return 0;
}