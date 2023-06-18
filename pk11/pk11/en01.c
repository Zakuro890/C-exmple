#include <stdio.h>
int main(void){
    int num[5]={1,2,3,4,5};
     for(int i = 0;i<5;i++){
         printf("%d",num[4-i]);
     }
     return 0;
}