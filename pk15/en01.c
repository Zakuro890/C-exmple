#include<stdio.h>
int main(void){
    int i;
    char moji[100];
    printf("一行の英文を入力して下さい．\n");
    gets(moji);
    //mojiを文字の配列とする
    for (i=0;moji[i]!='\0';i++)
        if (moji[i]>=97 && moji[i]<=122)
            moji[i] -= 32;
    puts(moji);
    return 0;
}