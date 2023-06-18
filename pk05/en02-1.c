#include<stdio.h>
int main(void){
  int iv=123;
    double dv=23.4567890123;
    printf("%d\n",iv);
    printf("%10d\n",iv);
    printf("%010d\n",iv);
    printf("%f\n",dv);
    printf("%10.3f\n",dv);
    printf("%010.3f\n",dv);

    return 0;
}