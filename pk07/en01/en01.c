#include <stdio.h>
int main(void)
{
    int i,j,k;
    printf("整数iを入力：");
    scanf("%d",&i);
    printf("整数jを入力：");
    scanf("%d",&j);
    printf("整数kを入力：");
    scanf("%d",&k);
    printf("条件式 %d+%d == %dの値は%dです．\n",i,j,k,(i+j==k));
    printf("条件式 %d+%d != %dの値は%dです．\n",i,j,k,(i+j!=k));

    return 0;
}