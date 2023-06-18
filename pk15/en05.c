#include <stdio.h>
int main(void){
    FILE *fp;
    char name[100], email[100];
    int age;
    double weight;
    fp = fopen("text.txt","r");
    if (fp==NULL){
        printf("ファイルをオープンすることができませんでした．\n");
        return 1;
    }
    fscanf(fp,"name: %s\n",name);
    fscanf(fp,"age: %d\n",&age);
    fscanf(fp,"weight: %lf\n",&weight);
    fscanf(fp,"e-mail: %s\n",email);

    printf("氏名: %s\n",name);
    printf("年齢: %d\n",age);
    printf("体重: %.1f\n",weight);
    printf("Eメール: %s\n",email);

    fclose(fp);
    return 0;
}