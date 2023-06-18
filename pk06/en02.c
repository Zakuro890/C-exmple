#include <stdio.h>
int main(void){
    int man = 20, woman = 16;
    double ratio;
    ratio = (double)woman/((double)man + (double)woman);
    printf("女性の割合は%.3f\n",ratio);
    return 0;
}