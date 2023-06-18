#include<stdio.h>
int main(){
int num = 0, t, s;
for (t=0;t<5; t++) {
for (s=0;s<5;s++) {
if (num==s)printf("#");
else printf("*");
}
num++;
printf("\n");
}
return 0;
}