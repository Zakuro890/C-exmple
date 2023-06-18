#include <stdio.h>
int main(void){
    int weight;
    int value;
    printf("d‚³‚ğ‚‡‚Å“ü—Í‚µ‚Ä‰º‚³‚¢>");
    scanf("%d",&weight);
    if(weight<=4000&&weight>2000){
        printf("—¿‹àF1350‰~");
    }else if(weight<=2000&&weight>1000){
        printf("—¿‹àF1040‰~");
    }else if(weight<=1000&&weight>500){
        printf("—¿‹àF710‰~");
    }else if(weight<=500&&weight>250){
        printf("—¿‹àF510‰~");
    }else if(weight<=250&&weight>150){
        printf("—¿‹àF350‰~");
    }else if(weight<=150>100){
        printf("—¿‹àF300‰~");
    }else if(weight<=100){
        printf("—¿‹àF220‰~");
    }else{
        printf("—¿‹àF200‰~");
    }
    return 0;
}