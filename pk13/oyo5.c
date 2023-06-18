#include <stdio.h>
typedef struct Book {
    char title[100];
    int value;
    int pages;
} Book;

int main(void){
    int i;
    Book test[3];
    for (i=0;i<3;i++) {
        printf("%d冊目のデータ\n",i+1);
        printf("  タイトル: ");
        scanf("%s",test[i].title);
        printf("  価格: ");
        scanf("%d",&test[i].value);
        printf("  ページ数: ");
        scanf("\n%d",&test[i].pages);
    }
    for (i=0;i<3;i++) {
        printf("%d冊目のデータ\n",i+1);
        printf("  {title=%s,value=%d,pages=%d}\n",
               test[i].title,test[i].value,test[i].pages);
    }
    return 0;
}