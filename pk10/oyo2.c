#include <stdio.h>
int main(void){
int i,j;
int num;
num=5;
for(i=0;i<num;i++){
for(j=num-i;j>0;j--){
printf("*");
}
printf("\n");
}
return(0);
}