#include <stdio.h>
int main(void){
    int i;
i=5;
printf("▼繰り返しに入る前¥n");
 do{
printf(" 繰り返しの中¥n");
i = i + 1;
}while( i<5);
printf("▲繰り返しの直後¥n");
return 0;
}