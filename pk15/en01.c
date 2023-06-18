#include<stdio.h>
int main(void){
    int i;
    char moji[100];
    printf("ˆês‚Ì‰p•¶‚ð“ü—Í‚µ‚Ä‰º‚³‚¢D\n");
    gets(moji);
    //moji‚ð•¶Žš‚Ì”z—ñ‚Æ‚·‚é
    for (i=0;moji[i]!='\0';i++)
        if (moji[i]>=97 && moji[i]<=122)
            moji[i] -= 32;
    puts(moji);
    return 0;
}