#include <stdio.h>
int main(void){
    int i;
    char filename[] = "f?.txt";
    FILE *fp;
    for (i=0;i<10;i++){
        filename[1] = '0'+i;
        fp = fopen(filename,"w");
        if (fp==NULL) {
            printf("�u%s�v�̃I�[�v���Ɏ��s���܂���\n",filename);
            return 1;
        }
        fclose(fp);//�t�@�C�������
    }
    return 0;
}