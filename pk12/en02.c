#include <stdio.h>
int main(void){
    int ar[4][4]={ { -1, 0, 1, 0 }, 
                   {  0, 1, 0, -1},
                   { 0, 0, 1,  0 },
                   { 1, -1, 1,-1}
    };
    for(int i=0;i<4;i++){
        printf("+-+-+-+-+\n");
        for(int j=0;j<4;j++){
        if(ar[i][j]==1){
            printf("|o");
        }else if(ar[i][j]==-1){
            printf("|x");
        }else if(ar[i][j]==0){
            printf("| ");
        }
        }
    printf("|\n");      
    }
    printf("+-+-+-+-+\n");
    return 0;

}