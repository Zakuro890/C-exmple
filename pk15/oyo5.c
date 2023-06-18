#include <stdio.h>
int main(void){
    int ch1;
    while((ch1=getchar())!= EOF){
        if(ch1 >= 97 && ch1 <=122)
            ch1 -= 32;
        putchar(ch1);
    }
    return 0;
}