#include <stdio.h>
int main(void){
     int i,num,tmp,max,min,sum;
    FILE *fp1, *fp2;
    fp1 = fopen("file1.txt","r");//�t�@�C�����J���P
    fp2 = fopen("file2.txt","w");//�t�@�C�����J���Q
    if (fp1==NULL || fp2==NULL){
        printf("�t�@�C�����I�[�v�����邱�Ƃ��ł��܂���ł����D\n");
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

    fprintf(fp2,"�ō��_��: %d\n",max);
    fprintf(fp2,"�Œ�_��: %d\n",min);
    fprintf(fp2,"�_�����v: %d\n",sum);//f��float�u�P���x���������_���v
    fprintf(fp2,"���ϓ_��: %.1f\n",(double)sum/(double)num);

    fclose(fp1);
    fclose(fp2);

    return 0;
}