#include <stdio.h>
int main(void){
    int array[10] = {-4, 15, 0, 8, 7, -5, 12, 0, -81, 72};
int i, nminus=0, nzero=0, nplus=0;
//§Œä•Ï”‚Ì‰Šú‰»‚ÆğŒ®‚ğ‘‚«‚È‚³‚¢
for (i=0 ; i<10; i++) 
if (array[i]<0)
nminus = nminus+1;
else if (array[i]==0)
nzero = nzero+1;
else
nplus = nplus+1; 
printf("•‰=%dAƒ[ƒ=%dA³=%d\n",nminus,nzero,nplus);
}