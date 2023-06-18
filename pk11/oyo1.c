#include <stdio.h>
int main(void){
    int a = 1, b = 0, c = 0;
for (int i = 0; i < 10; i++){
c = a + b;
a = b;
b = c;
printf("%d ",c);
}
}