#include <stdio.h>
int main(void){
int a=20,b=5,c=2,d=3;
a %= b *= c += d -= 2;
printf("a=%d\n",a);
return 0;
}