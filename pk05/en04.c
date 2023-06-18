#include <stdio.h>
int main(void){
    int a = 10;
    //インクリメントを複数回適用
    a++;
    a++;
    printf("a=%d\n",a);
    //デクリメントを複数回適用
    a--;
    a--;
    a--;
    printf("a=%d\n",a);

    return 0;
}