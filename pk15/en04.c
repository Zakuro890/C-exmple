#include <stdio.h>
int main(void){
     int i,num,tmp,max,min,sum;
    FILE *fp1, *fp2;
    fp1 = fopen("file1.txt","r");//ファイルを開く１
    fp2 = fopen("file2.txt","w");//ファイルを開く２
    if (fp1==NULL || fp2==NULL){
        printf("ファイルをオープンすることができませんでした．\n");
        return 1;
    }
    fscanf(fp1,"%d",&num);
    max = -1000000;
    min =  1000000;
    sum = 0;
    for (i=0;i<num;i++){
        fscanf(fp1,"%d",&tmp);
        if (max < tmp)
            max = tmp;
        if (min > tmp)
            min = tmp;
        sum = sum + tmp;
    }

    fprintf(fp2,"最高点数: %d\n",max);
    fprintf(fp2,"最低点数: %d\n",min);
    fprintf(fp2,"点数合計: %d\n",sum);//fはfloat「単精度浮動小数点数」
    fprintf(fp2,"平均点数: %.1f\n",(double)sum/(double)num);

    fclose(fp1);
    fclose(fp2);

    return 0;
}