#include<stdio.h>
int main(void){
    int i;
    char moji[100];
    printf("��s�̉p������͂��ĉ������D\n");
    gets(moji);
    //moji�𕶎��̔z��Ƃ���
    for (i=0;moji[i]!='\0';i++)
        if (moji[i]>=97 && moji[i]<=122)
            moji[i] -= 32;
    puts(moji);
    return 0;
}