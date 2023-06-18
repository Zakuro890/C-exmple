#include <stdio.h>
#define NUM 100

int main(void){
    int i;
    FILE *fp1, *fp2;
    char moji[NUM];
    fp1 = fopen("test1.txt","r");
    fp2 = fopen("test2.txt","w");
    if (fp1==NULL || fp2==NULL){
        printf("ファイルをオープンできませんでした．\n");
        return 1;
    }
    for (i=0;i<10;i++){
        fgets(moji,NUM-1,fp1);
        fputs(moji,fp2);
    }
    fclose(fp1);//ファイルを閉じる１
    fclose(fp2);//ファイルを閉じる２
    return 0;
}