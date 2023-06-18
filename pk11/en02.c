#include <stdio.h>
#define MAX 10
int main(void){
int d[MAX],k;
for(k=0;k<MAX;k++){
printf("整数>");
scanf("%d",&d[k]);
if(d[k]<0) break;
}
for(k--;k>-1;k--) printf("%d ",d[k]);
return 0;
}

