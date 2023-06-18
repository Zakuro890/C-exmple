#include <stdio.h>
int main(void){
    char ans;
    scanf("%s",&ans);
    switch(ans){
        case 'M':
        printf("明治");
        break;

        case 'T':
        printf("大正");
        break;

        case 'S':
        printf("昭和");
        break;
        
        case 'H':
        printf("平成");
        break;

        case 'R':
        printf("令和");
        break;

        default:
        printf("エラー");
        break;
    }
}