#include <stdio.h>
int main(void){
    int array[10]={-4,15,0,82,7,-5,12,2,72,-81};
    int max_value = array[0];
    int min_value = array[0];

    for(int i =0;i<10;i++){
        if(array[i]>max_value){
            max_value = array[i];
        }
    }
        printf("Å‘å’lF%d\n",max_value);
    for(int j = 0;j<10;j++){
        if(array[j]<min_value){
            min_value = array[j];
        }
    }
    printf("Å¬’l%d\n",min_value);
}