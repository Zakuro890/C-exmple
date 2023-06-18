#include <stdio.h>
int main(void){
    int i,tmp;
    int array[10];
    for(int i=0;i<10;i++){
        scanf("%d",&array[i]);
        printf("整数");
        if(array[i]>0){
            if(i==0){
                break;
            }else{
                i--;
                break;
            }
        }
    }
    for(int j=0;j<=i;j++){
        for(int x=0;x<=i;x++){
            if(array[j]>array[x]){
                tmp=array[j];
                array[j]=array[x];
                array[x]= tmp;
            }
        }
    }
    for(int z=0;z<=i;z++){
        printf("%d",array[z]);
    }
    return 0;
}