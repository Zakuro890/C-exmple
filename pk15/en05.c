#include <stdio.h>
int main(void){
    FILE *fp;
    char name[100], email[100];
    int age;
    double weight;
    fp = fopen("text.txt","r");
    if (fp==NULL){
        printf("�t�@�C�����I�[�v�����邱�Ƃ��ł��܂���ł����D\n");
        return 1;
    }
    fscanf(fp,"name: %s\n",name);
    fscanf(fp,"age: %d\n",&age);
    fscanf(fp,"weight: %lf\n",&weight);
    fscanf(fp,"e-mail: %s\n",email);

    printf("����: %s\n",name);
    printf("�N��: %d\n",age);
    printf("�̏d: %.1f\n",weight);
    printf("E���[��: %s\n",email);

    fclose(fp);
    return 0;
}