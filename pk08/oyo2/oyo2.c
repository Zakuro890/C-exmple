#include <stdio.h>
int main(void){
    int n;
    printf("\n整数：");
    scanf("%d",&n);
    if(5<=n&& n<=9){
        printf("\n%dは5以下9以下です",n);
    }else{
        printf("\n%dは5未満か、9より大きいです",n);
    }
}